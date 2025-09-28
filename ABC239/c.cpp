#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<pair<int, int>> d;
    bool is_ok;

    d.push_back({1, 2});
    d.push_back({1, -2});
    d.push_back({-1, 2});
    d.push_back({-1, -2});
    d.push_back({2, 1});
    d.push_back({2, -1});
    d.push_back({-2, 1});
    d.push_back({-2, -1});

    is_ok = false;

    for(auto delta:d){
        int dx = delta.first;
        int dy = delta.second;
        int x = x1 + dx;
        int y = y1 + dy;
        int length = (x-x2)*(x-x2) + (y-y2)*(y-y2);
        if( length == 5) is_ok = true; 
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}