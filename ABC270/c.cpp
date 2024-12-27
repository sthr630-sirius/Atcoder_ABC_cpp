#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, x, y;
    int u, v;
    cin >> n >> x >> y;
    vector<vector<int>> g(n, vector<int>());
    vector<int> parent_node(n, 0);
    vector<bool> is_visited(n, false);
    int now_node, next_node;
    vector<int> next_nodes;
    vector<int> ans;

    x--;
    y--;

    for(int i=0; i<n-1; i++){
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    now_node = x;
    next_node = now_node;
    next_nodes.push_back(next_node);
    parent_node[next_node] = -1;
    is_visited[next_node] = true;

    while(not next_nodes.empty()){
        now_node = next_nodes.back();
        next_nodes.pop_back();
        for(int i=0; i<g[now_node].size(); i++){
            next_node = g[now_node][i];
            if(not is_visited[next_node]){
                next_nodes.push_back(next_node);
                parent_node[next_node] = now_node;
                is_visited[next_node] = true;
            }
        }                          
    }

    now_node = y;
    while(parent_node[now_node] != -1){
        ans.push_back(now_node+1);
        now_node = parent_node[now_node];
    }

    ans.push_back(x+1);

    auto iter = ans.end()-1;
    while(iter >= ans.begin()){
        cout << *iter << " ";
        iter--;
    }
    
    return 0;

}