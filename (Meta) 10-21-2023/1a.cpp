#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    freopen("ready_go_part_1_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc;
    cin >> tc;
    for (int a = 0; a < tc; a++){
        int r, c;
        cin >> r >> c;
        char arr[r][c];
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> arr[i][j];
            }
        }
        //check for white adjancey
        bool visited[r][c] = {false};
        int sol = 0;
        for (int i = 0; i < r; i++){
            for (int j = 0; j < r; j++){
                if (sol > 0) break;
                if (arr[i][j] == 'W' && visited[i][j] == false){
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    int qcount = q.size();
                    pair<int, int> open = {-2, -2};
                    while(qcount != 0){
                        for (int k = 0; k < qcount; k++){
                            pair<int, int> temp = q.front();
                            q.pop();
                            int x = temp.first;
                            int y = temp.second;
                            visited[x][y] = true;
                            if (x-1 > -1){
                                if (arr[x-1][y] == 'W' && visited[x-1][y] == false){
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
                                if (arr[x+1][y] == 'W' && visited[x+1][y] == false){
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
                                if (arr[x][y-1] == 'W' && visited[x][y-1] == false){
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
                                if (arr[x][y+1] == 'W' && visited[x][y+1] == false){
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
                        sol = 1;
                        break;
                    }
                }
            }
        }
        if (sol > 0) cout << "Case #" << a+1 << ": YES\n";
        else{
            cout << "Case #" << a+1 << ": NO\n";
        }
    }
    return 0;
}