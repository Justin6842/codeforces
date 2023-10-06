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
    ll sol = 0;
    ll soldiv = (vec[0]/y);
    if (vec[0]%y != 0) soldiv++;
    cout << soldiv << '\n';
    for (int i = 1; i < x; i++){
        ll tempdiv = (vec[i]/y);
        if (vec[i]%y != 0) tempdiv++;
        cout << tempdiv << '\n';
        if (tempdiv >= soldiv){
            sol = i;
            soldiv = tempdiv;
        }
    }
    cout << (sol+1);
    return 0;
}