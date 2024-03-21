#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x;
    cin >> x;
    for (ll i = 0; i < x; i++){
        ll n, k;
        cin >> n >> k;
        if (k >= n-1) cout << 1 << "\n";
        else{
            cout << n << "\n";
        }
    }
    return 0;
}