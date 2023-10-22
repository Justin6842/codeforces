#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        int sol = 10;
        int evens = 0;
        for (int i = 0; i < n; i++){
            cin >> vec[i];
            if (vec[i]%k == 0) sol = 0;
            else if (vec[i]%2 == 0) evens++;
            sol = min(sol, (k-(vec[i]%k)));
        }
        if (k == 4) sol = min(sol, 2-(min(evens, 2)));
        cout << sol << '\n';

    }
    return 0;
}