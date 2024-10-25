#include<iostream>
#include<vector>
using namespace std;
int main(){
    int h, w;
    int sx, sy;
    string x;

    cin >> h >> w;
    cin >> sy >> sx;
    
    sx--;
    sy--;

    vector<string> field(h);

    for(int i=0; i<h; i++) cin >> field[i];
    cin >> x;

    for(int i=0; i<x.size(); i++){
        if(x[i] == 'L' && sx-1>=0 && field[sy][sx-1] != '#') sx--;
        else if(x[i] == 'R' && sx+1<w && field[sy][sx+1] != '#') sx++;
        else if(x[i] == 'U' && sy-1>=0 && field[sy-1][sx] != '#') sy--;
        else if(x[i] == 'D' && sy+1<h && field[sy+1][sx] != '#') sy++;
    }

    cout << sy+1 << " " << sx+1 << endl;

    return 0;

}