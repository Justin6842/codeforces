#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x;
    cin >> x;
    vector<char> vec (x);
    for (int i = 0; i < x; i++){
        cin >> vec[i];
    }
    ll lower = 0;
    ll higher = 0;
    for (int i = 0; i < x; i++){
        if (vec[i] == 'x') lower++;
        else{
            higher++;
        }
    }
    ll diff = (lower-higher)/2;
    if (diff < 0){
        diff *= -1;
        ll temp = diff;
        for (int i = 0; i < x; i++){
            if (temp == 0) break;
            if (vec[i] == 'X'){
                vec[i] = 'x';
                temp--;
            }
        }
    }
    else{
        ll temp = diff;
        for (int i = 0; i < x; i++){
            if (temp == 0) break;
            if (vec[i] == 'x'){
                vec[i] = 'X';
                temp--;
            }
        }
    }
    cout << diff << '\n';
    for (int i = 0; i < x; i++){
        cout << vec[i];
    }
    return 0;
}