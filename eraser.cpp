#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int testc; cin >> testc;
    for (int i = 0; i < testc; i++){
        int length, erase; cin >> length >> erase;
        vector<char> arr;
        for (int i = 0; i < length; i++){
            char x; cin >> x;
            arr.push_back(x);
        }
        int sol = 0;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == 'B'){
                sol++;
                i += (erase-1);
            }
        }
        cout << sol << '\n';
    }
    return 0;
}