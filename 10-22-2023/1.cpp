#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        vector<int> vec(4);
        for (int i = 0; i < 4; i++){
            char temp;
            cin >> temp;
            vec[i] = (temp-'0');
            if (vec[i] == 0) vec[i] = 10;
        }
        int sol = 4;
        sol += abs(vec[0]-1);
        for (int i = 1; i < 4; i++){
            sol += abs(vec[i]-vec[i-1]);
        }
        cout << sol << '\n';
    }
    return 0;
}