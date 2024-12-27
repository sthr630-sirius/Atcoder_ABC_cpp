#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<vector<char>> field(2001, vector<char>(2001, 'w'));
    vector<vector<bool>> is_visited(2001, vector<bool>(2001, false));
    int x, y;

    vector<vector<int>> delta = {{1, 1}, {1, 0}, {0, 1}, {-1, -1}, {-1, 0}, {0, -1}};
    int now_x, now_y, dx, dy, next_x, next_y;
    vector<vector<int>> next_grid;
    vector<vector<int>> now;
    int ans;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        x += 1000;
        y += 1000;
        field[x][y] = 'b';
    }

    ans = 0;

    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            next_grid = {};

            now_x = i;
            now_y = j;

            next_x = now_x;
            next_y = now_y;
            
            if(field[next_x][next_y] == 'b' && not is_visited[next_x][next_y]){
                next_grid.push_back({next_x, next_y});
                is_visited[next_x][next_y] = true;
        
                while(not next_grid.empty()){
                    auto now = next_grid.back();
                    next_grid.pop_back();
                    now_x = now[0];
                    now_y = now[1];

                    for(int k=0; k<6; k++){
                        dx = delta[k][0];
                        dy = delta[k][1];
                        next_x = now_x + dx;
                        next_y = now_y + dy;
                        
                        if(next_x < 0 || next_x >= 2001 || next_y < 0 || next_y >= 2001) continue;
                        
                        if(field[next_x][next_y] == 'b' && not is_visited[next_x][next_y]){
                            next_grid.push_back({next_x, next_y});
                            is_visited[next_x][next_y] = true;
                        }
                    }
                }
                
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;

}