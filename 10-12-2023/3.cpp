#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll r;
        cin >> r;
        char arr[r][r];
        for (int i = 0; i < r; i++){
            for (int j = 0; j < r; j++){
                cin >> arr[i][j];
            }
        }
        ll sol = 0;
        
        for (int i = 0; i < r; i++){
            ll lim = r-i-1;
            for (int j = i; j < lim; j++){
                ll limj = r-j-1;
                int v1 = (arr[i][j]-'a');
                int v2 = (arr[j][lim]-'a');
                int v3 = (arr[lim][limj]-'a');
                int v4 = (arr[limj][i]-'a');
                int m = max(v1, v2);
                m = max(m, v3);
                m = max(m, v4);
                sol += (m-v1);
                sol += (m-v2);
                sol += (m-v3);
                sol += (m-v4);
            }
        }
        cout << sol << '\n';
        
    }
    return 0;
}