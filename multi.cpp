#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int testc; cin >> testc;
    for (int i = 0; i < testc; i++){
        int length; cin >> length;
        vector<int> multi;
        for (int i = 0; i < length; i++){
            int x; cin >> x;
            multi.push_back(x);
        }
        sort(multi.begin(), multi.end());
        multi[0]++;
        int sol = 1;
        for (int i = 0; i < multi.size(); i++){
            sol *= multi[i];
        }
        cout << sol << '\n';
    }
    return 0;
}