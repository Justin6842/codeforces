#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        ll r, c;
        cin >> r >> c;
        char arr[r][c];
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> arr[i][j];
            }
        }
        //check for white adjancey
        int result[r][c];
        int visited[r][c];
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                result[i][j] = 0;
                visited[i][j] = 0;
            }
        }
        ll visitnum = 1;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < r; j++){
                if (arr[i][j] == 'W' && visited[i][j] == 0){
                    vector<pair<ll, ll>> vec;
                    queue<pair<ll, ll>> q;
                    q.push({i, j});
                    int qcount = q.size();
                    pair<ll, ll> open = {-2, -2};
                    while(qcount != 0){
                        for (int k = 0; k < qcount; k++){
                            pair<ll, ll> temp = q.front();
                            q.pop();
                            ll x = temp.first;
                            ll y = temp.second;
                            visited[x][y] = visitnum;
                            vec.push_back({x, y});
                            if (x-1 > -1){
                                if (arr[x-1][y] == 'W' && visited[x-1][y] == 0){
                                    q.push({x-1, y});
                                }
                                else if(arr[x-1][y] == '.'){
                                    if (x-1 == open.first && y == open.second){
                                        open = {x-1, y};
                                    }
                                    else if (open.first != -2){
                                        open.first = -1;
                                    }
                                    else{
                                        open = {x-1, y};
                                    }
                                }
                            }
                            if (x+1 < r){
                                if (arr[x+1][y] == 'W' && visited[x+1][y] == 0){
                                    q.push({x+1, y});
                                }
                                else if(arr[x+1][y] == '.'){
                                    if (x+1 == open.first && y == open.second){
                                        open = {x+1, y};
                                    }
                                    else if (open.first != -2){
                                        open.first = -1;
                                    }
                                    else{
                                        open = {x+1, y};
                                    }
                                }
                            }
                            if (y-1 > -1){
                                if (arr[x][y-1] == 'W' && visited[x][y-1] == 0){
                                    q.push({x, y-1});
                                }
                                else if(arr[x][y-1] == '.'){
                                    if (x == open.first && y-1 == open.second){
                                        open = {x, y-1};
                                    }
                                    else if (open.first != -2){
                                        open.first = -1;
                                    }
                                    else{
                                        open = {x, y-1};
                                    }
                                }
                            }
                            if (y+1 < c){
                                if (arr[x][y+1] == 'W' && visited[x][y+1] == 0){
                                    q.push({x, y+1});
                                }
                                else if(arr[x][y+1] == '.'){
                                    if (x == open.first && y+1 == open.second){
                                        open = {x, y+1};
                                    }
                                    else if (open.first != -2){
                                        open.first = -1;
                                    }
                                    else{
                                        open = {x, y+1};
                                    }
                                }
                            }
                        }
                        qcount = q.size();
                    }
                    if (open.first > -1){
                        for (int i = 0; i < vec.size(); i++){
                            result[vec[i].first][vec[i].second] = vec.size();
                        }
                    }
                }
                
                visitnum++;
            }
        }
        int sol = 0;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (arr[i][j] == '.'){
                    int tempsol = 0;
                    if (i-1 > -1){
                        if (result[i-1][j] > 0){
                            tempsol += result[i-1][j];
                        }
                    }
                    if (i+1 < r){
                        if (result[i+1][j] > 0 && (visited[i+1][j] != visited[i-1][j])){
                            tempsol += result[i+1][j];
                        }
                    }
                    if (j-1 > -1){
                        if (result[i][j-1] > 0 && (visited[i][j-1] != visited[i-1][j]) && (visited[i][j-1] != visited[i+1][j])){
                            tempsol += result[i][j-1];
                        }
                    }
                    if (j+1 < c){
                        if (result[i][j+1] > 0 && (visited[i][j+11] != visited[i-1][j]) && (visited[i][j+1] != visited[i+1][j]) && (visited[i][j+1] != visited[i][j-1])){
                            tempsol += result[i][j+1];
                        }
                    }
                    if (tempsol > sol) sol = tempsol;
                }
            }
        }
        cout << "Case #" << a+1 << ": " << sol << '\n';

    }
    return 0;
}