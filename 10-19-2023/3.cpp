#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll n, s;
        cin >> n >> s;
        ll sum = 0;
        ll temp = n;
        while (temp > 0){
            sum += temp%10;
            temp /= 10;
        }
        ll digit = 1;
        ll sol = 0;
        bool isfirst = true;
        while (sum > s){
            temp = n%10;
            n /= 10;
            if (temp == 0 && !isfirst){
                sum -= 9;
                digit *= 10;
                continue;
            }
            n++;

            sum -= (temp-1);
            sol += (10-temp)*digit;
            digit *= 10;
            isfirst = false;
        }
        cout << sol << '\n';
        
    }
    return 0;
}