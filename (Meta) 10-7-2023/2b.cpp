#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll p;
        cin >> p;
        vector<ll> primes;
        vector<ll> multiples;
        ll i = 41;
        vector<int> hasfactor = {0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0};
        int sol = 0; 
        while (i > 1 && p != 1){
            if (hasfactor[i] && p%i == 0){
                p /= i;
                sol += i;
                multiples.push_back(i);
            }
            else if (p%i == 0){
                p /= i; 
                sol += i;
                primes.push_back(i);
            }
            else{
                i--;
            }
        }
        cout << (a+1) << ' ' << multiples.size()  << ' ' << primes.size() << '\n';
        /*if (p > 1){
            cout << "Case #" << (a+1) << ": -1" << '\n';
            continue;
        }
        else{
            for (int i = 0; i < primes.size(); i++){
            cout << "Case #" << (a+1) << ": " << primes.size() << ' ';
            for (int i = 0; i < primes.size(); i++){
                cout << primes[i] << ' ';
            }
            cout << '\n';
            }
        }*/
    }
    return 0;
}