#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x;
    cin >> x;

    ll sol = x/2;

    cout << sol << '\n';
    
    for (ll i = 0; i < sol-1; i++){
        cout << 2 << ' ';
    }
    if (x%2 == 1) cout << 3;
    else{
        cout << 2;
    }

    return 0;
}