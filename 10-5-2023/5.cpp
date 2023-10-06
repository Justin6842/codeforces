#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int total = 0; 
    int slide = 1;
    for (int i = 0; i < n; i++){
        while (slide != n && vec[slide] <= vec[i]){
            slide++;
        }
        if (slide == n) break;
        else{
            total++;
            slide++;
        }
    }
    cout << (n-total);
    return 0;
}