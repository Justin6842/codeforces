#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x;
    cin >> x;
    if (x < 4) cout << "NO";
    else{
        cout << "YES" << '\n';
        if (x%4 == 0){
            cout << "1 * 2 = 2" << '\n';
            cout << "2 * 3 = 6" << '\n';
            cout << "6 * 4 = 24" << '\n';
            for (int i = 5; i < x; i += 4){
                cout << i << " - " << (i+1) << " = -1" << '\n';
                cout << i+3 << " - " << (i+2) << " = 1" << '\n';
                cout << "-1 + 1 = 0" << '\n';
                cout << "24 + 0 = 24" << '\n';             
            }
        }
        else if (x%4 == 1){
            cout << "5 * 4 = 20" << '\n';
            cout << "20 - 1 = 19" << '\n';
            cout << "19 + 3 = 22" << '\n';
            cout << "22 + 2 = 24" << '\n';
            for (int i = 6; i < x; i += 4){
                cout << i << " - " << (i+1) << " = -1" << '\n';
                cout << i+3 << " - " << (i+2) << " = 1" << '\n';
                cout << "-1 + 1 = 0" << '\n';
                cout << "24 + 0 = 24" << '\n';             
            }
        }
        else if (x%4 == 2){
            cout << "6 * 4 = 24" << '\n';
            cout << "24 - 1 = 23" << '\n';
            cout << "23 + 2 = 25" << '\n';
            cout << "25 + 3 = 28" << '\n';
            cout << "28 - 4 = 24" << '\n';
            for (int i = 7; i < x; i += 4){
                cout << i << " - " << (i+1) << " = -1" << '\n';
                cout << i+3 << " - " << (i+2) << " = 1" << '\n';
                cout << "-1 + 1 = 0" << '\n';
                cout << "24 + 0 = 24" << '\n';             
            }
        }
        else{
            cout << "6 * 4 = 24" << '\n';
            cout << "24 + 7 = 31" << '\n';
            cout << "31 - 5 = 26" << '\n';
            cout << "26 - 3 = 23" << '\n';
            cout << "23 + 2 = 25" << '\n';
            cout << "25 - 1 = 24" << '\n';
            for (int i = 8; i < x; i += 4){
                cout << i << " - " << (i+1) << " = -1" << '\n';
                cout << i+3 << " - " << (i+2) << " = 1" << '\n';
                cout << "-1 + 1 = 0" << '\n';
                cout << "24 + 0 = 24" << '\n';             
            }
        }
    }
    return 0;
}