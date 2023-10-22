#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll n, k; cin >> n >> k;
        vector<ll> vec(26);
        char temp;
        for (int i = 0; i < n; i++){
            cin >>  temp;
            vec[(temp-'a')]++;
        }
        ll oddcount = 0;
        ll evencount = 0;
        for (int i = 0; i < 26; i++){
            evencount += vec[i]/2;
            if (vec[i]%2 == 1) oddcount++;
        }
        if (oddcount > 1) k -= (oddcount-1);
        while (k > 1 && evencount > 0){
            evencount--;
            k -= 2;
        }
        if (k == 0 || (k == 1 && (oddcount > 0 || evencount > 0))) cout << "YES" << '\n';
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}