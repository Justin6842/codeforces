#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        vector<ll> vec(3);
        cin >> vec[0] >> vec[1] >> vec[2];
        sort(vec.begin(), vec.end());
        ll sol = 3;
        if (vec[1] > vec[0]){
            if (vec[1] % vec[0] != 0) sol -= 4;
            else{ sol -= (vec[1]/vec[0])-1; }
        }
        if (vec[2] > vec[0]){
            if (vec[2] % vec[0] != 0) sol -= 4;
            else{ sol -= (vec[2]/vec[0])-1; }
        }
        if (sol >= 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}