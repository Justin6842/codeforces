#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("here_comes_santa_claus_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll n;
        cin >> n;
        vector<double> vec(n);
        for (int i = 0; i < n; i++){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        double sol = 0;
        if (n == 4){
            sol = (vec[3]+vec[2])/2 - (vec[0]+vec[1])/2;

        }
        else if (n == 5){
            double x = (vec[3]+vec[4])/2 - (vec[0]+vec[2])/2;
            double y = (vec[2]+vec[4])/2 - (vec[0]+vec[1])/2;
            if (x > y) sol = x;
            else{
                sol = y;
            }
        }
        else{
            sol = (vec[vec.size()-1]+vec[vec.size()-2])/2 - (vec[0]+vec[1])/2;
        }
        cout << "Case #" << (a+1) << ": " << sol << '\n';
    }
    return 0;
}