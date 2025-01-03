#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    n = 9;
    vector<string> s(n);
    int ax, ay, bx, by, cx, cy, dx, dy;
    int ans;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    ans = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=i+1; k<n; k++){
                for(int l=0; l<=j; l++){
                    ay = i;
                    ax = j;
                    by = k;
                    bx = l;
                    cy = by + abs(ax-bx);
                    cx = bx + abs(ay-by);
                    dy = ay + abs(ax-bx);
                    dx = ax + abs(ay-by);
                    if(0 <= by && by < 9 && 0 <= bx && bx < 9){
                        if(0 <= cy && cy < 9 && 0 <= cx && cx < 9){
                            if(0 <= dy && dy < 9 && 0 <= dx && dx < 9){
                                if(s[ay][ax] == '#' && s[by][bx] == '#' && s[cy][cx] == '#' && s[dy][dx] == '#'){
                                    //cout << ay << ", " << ax << endl;
                                    //cout << by << ", " << bx << endl;
                                    //cout << cy << ", " << cx << endl;
                                    //cout << dy << ", " << dx << endl;
                                    ans++;
                                }
                            }
                        }
                    }              
                }
            }
        }
    }

    cout << ans << endl;

    return 0;

}