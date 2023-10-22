#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        int n;
        cin >> n;
        vector<ll> vec(n);
        for (int i = 0; i < n; i++){
            cin >> vec[i];

        }
        ll sol = 0;
        for (int i = 1; i < n; i++){
            while(vec[i] < vec[i-1]){
                vec[i] *= 2;
                sol++;
            }
        }
        cout << sol << '\n';


    }
    return 0;
}