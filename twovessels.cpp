#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;
    for (int i = 0; i < tc; i++){
        int a,b,c; cin >> a >> b >> c;
        bool re = true;
        int total = a-b;
        if (total < 0) total *= -1;
        if (total%(2*c) != 0) re = true;
        else{
            re = false;
        }
        total /= (2*c);
        if (re) total++;
        cout << total << '\n';
    }
    return 0;
}