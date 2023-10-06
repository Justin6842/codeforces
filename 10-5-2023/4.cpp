#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++){
        ll n;
        cin >> n;
        vector<ll> vec(n);
        for (int j = 0; j < n; j++){
            cin >> vec[j];
        }
        ll sol = 0; 
        ll low = vec[n-1];
        for (int j = vec.size()-2; j > -1; j--){
            if (vec[j] > low) sol++;
            else{
                low = vec[j];
            }
        }
        cout << sol << '\n';
    }
    return 0;
}