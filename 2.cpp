#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x;
    cin >> x;
    ll temp = 1;
    for (int i = 0; i < x; i++){
        ll stars = (x-temp)/2;
        for (int i = 0; i < stars; i++){
            cout << '*';
        }
        for (int i = 0; i < temp; i++){
            cout << 'D';
        }
        for (int i = 0; i < stars; i++){
            cout << '*';
        }
        if (i < x/2) temp += 2;
        else{
            temp -= 2;
        }
        cout << '\n';
    }
    return 0;
}