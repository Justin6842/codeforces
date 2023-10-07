#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("sum_41_chapter_1_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll p;
        cin >> p;
        vector<ll> vec;
        ll i = 41;
        vector<int> hasfactor = {0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0};
        int sol = 0; 
        while (i > 1 && p != 1){
            if (hasfactor[i]) i--;
            else if (p%i == 0){
                p /= i; 
                sol += i;
                vec.push_back(i);
            }
            else{
                i--;
            }
        }
        if (p > 1 || sol > 41){
            cout << "Case #" << (a+1) << ": -1" << '\n';
            continue;
        } 
        else{
            for (int i = sol; i < 41; i++){
                vec.push_back(1);
            }
            cout << "Case #" << (a+1) << ": " << vec.size() << ' ';
            for (int i = 0; i < vec.size(); i++){
                cout << vec[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}