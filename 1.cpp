#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll x, y;
        cin >> x >> y;
        vector<char> v1 (x);
        vector<char> v2 (y);
        for (int i = 0; i < x; i++){
            cin >> v1[i];
        }
        for (int i = 0; i < y; i++){
            cin >> v2[i];
        }
        ll sol = 0;
        while (x < y){
            sol++;
            ll temp = x;
            x *= 2;
            for (int i = 0; i < temp; i++){
                v1.push_back(v1[i]);
            }
        }
        int match = 0;
        for (int i = 0; i <= x-y; i++){
            if (match) break;
            else{
                int j = 0;
                while (j < y && v1[i+j] == v2[j]) j++;
                if (j == y) match = 1;
            }
        }
        if (match == 1) cout << sol << '\n';
        else{
            sol++;
            ll temp = x;
            x *= 2;
            for (int i = 0; i < temp; i++){
                v1.push_back(v1[i]);
            }
            for (int i = 0; i <= x-y; i++){
                if (match) break;
                else{
                    int j = 0;
                    while (j < y && v1[i+j] == v2[j]) j++;
                    if (j == y) match = 1;
                }
            }
            if (match == 1) cout << sol << '\n';
            else{
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}
