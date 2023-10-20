#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll n; 
        cin >> n;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        if (vec[n-1] < 0){
            ll sol = (vec[n-1] * vec[n-2] * vec[n-3] * vec[n-4] * vec[n-5]);
            cout << sol << '\n';
        }
        else if(vec[n-1] == 0){
            cout << 0 << '\n';
        }
        else{
            ll sol1 = vec[0]*vec[1]*vec[2]*vec[3]*vec[n-1];
            ll sol2 = vec[0]*vec[1]*vec[n-1]*vec[n-2]*vec[n-3];
            ll sol3 = (vec[n-1] * vec[n-2] * vec[n-3] * vec[n-4] * vec[n-5]);
            if (sol1 < sol2) sol1 = sol2;
            if (sol1 < sol3) sol1 = sol3;
            cout << sol1 << '\n';
        }
    }

    return 0;
}