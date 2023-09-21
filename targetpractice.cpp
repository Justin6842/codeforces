#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int testc; cin >> testc;
    for (int i = 0; i < testc; i++){
        int sol = 0;
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                char x; cin >> x;
                if (x == 'X'){
                    int y = i;
                    int z = j;
                    if (y > 4) y = 9-y;
                    if (z > 4) z = 9-z;
                    sol += min(y, z)+1;
                }
                
            }
        }
        cout << sol << '\n';

    }
    return 0;
}