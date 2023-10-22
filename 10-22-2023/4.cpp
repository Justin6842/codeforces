#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    vector<pair<ll, ll>> vec;
    for (int a = 0; a < tc; a++){
        char b;
        cin >> b;
        ll x, y;
        cin >> x >> y;
        if (b == '-'){
            for (int i = 0; i < vec.size(); i++){
                if (x == vec[i].first && y == vec[i].second) vec.erase(vec.begin()+i);
            }
        }
        else{
            vec.push_back({x,y});
            sort(vec.begin(), vec.end());

        }
        bool state = false;
        for (int i = 0; i < vec.size()-1; i++){
            if (vec[vec.size()-1].first > vec[i].second){
                state = true;
                break;
            }
        }
        if (vec.size() == 0) cout << "NO" << '\n';
        else if (state) cout << "YES" << '\n';
        else{
            cout << "NO" << '\n';
        }

    }
    return 0;
}