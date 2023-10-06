#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x, y;
    cin >> x >> y;
    vector<ll> vec(x);
    for (int i = 0; i < x; i++){
        cin >> vec[i];
    }
    for (int i = 0; i < x; i++){
        ll tempdiv = (vec[i]/y);
        if (vec[i]%y != 0) tempdiv++;
        vec[i] = tempdiv;
    }
    ll sol = 0;
    ll num = vec[0];
    for (int i = 1; i < x; i++){
        if (vec[i] >= num){
            sol = i;
            num = vec[i];
        }
    }
    cout << (sol+1);
    return 0;
}