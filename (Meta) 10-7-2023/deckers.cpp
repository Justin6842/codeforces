#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("cheeseburger_corollary_1_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    for (int i = 0; i < tc; i++){
        ll s, d, k;
        cin >> s >> d >> k;
        if ((s+d*2) < k){
            cout << "Case #" << (i+1) << ": " << "NO" << '\n';
        }
        else if ((s*2+d*2) < (k+1)){
            cout << "Case #" << (i+1) << ": " << "NO" << '\n';
        }
        else{
            cout << "Case #" << (i+1) << ": " << "YES" << '\n';
        }   
    }
    return 0;
}