#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int testc; cin >> testc;
    for (int i = 0; i < testc; i++){
        int trapc; cin >> trapc;
        int sol = INT_MAX;
        for (int j = 0; j < trapc; j++){
            int location, time; cin >> location >> time;
            int x = location + (time-1)/2;
            if (x < sol) sol = x;
        }
        cout << sol << '\n';
    }
    return 0;
}