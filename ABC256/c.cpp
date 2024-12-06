#include<iostream>
using namespace std;
int main(){
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    int ans;

    ans = 0;

    for(int i=1; i<30; i++){
        for(int j=1; j<30; j++){
            for(int k=1; k<30; k++){
                for(int l=1; l<30; l++){
                    if(h1-(i+j) < 1) continue;
                    if(h2-(k+l) < 1) continue;
                    if(w1-(i+k) < 1) continue;
                    if(w2-(j+l) < 1) continue;
                    if(w3-(h1-(i+j))-(h2-(k+l)) < 1) continue;
                    if(h3-(w1-(i+k))-(w2-(j+l)) < 1) continue;
                    if(h3-(w1-(i+k))-(w2-(j+l)) == w3-(h1-(i+j))-(h2-(k+l))) ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}