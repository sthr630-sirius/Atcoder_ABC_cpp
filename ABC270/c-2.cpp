#include<iostream>
#include<vector>
using namespace std;

int x, y;
vector<vector<int>> g(100);
vector<int> ans;

bool dfs(int now_v, int parent_v){
    if(now_v == y){
        ans.push_back(now_v+1);
        return true;
    }else{
        for(auto next_v:g[now_v]){
            if(next_v == parent_v) continue;
            if(dfs(next_v, now_v)){
                ans.push_back(now_v+1);
                return true;
            }
        }
        return false;
    }
}

int main(){
    int n;
    int u, v;
    cin >> n >> x >> y;
    x--;
    y--;
    for(int i=0; i<n-1; i++){
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(x, -1);
    
    auto itr = ans.end()-1;
    while(itr >= ans.begin()){
        cout << *itr << " ";
        itr--;
    }

    return 0;

}