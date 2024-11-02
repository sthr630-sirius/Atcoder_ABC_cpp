#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> balls(1000000+1);
    string query;
    int q;
    int x;
    int ans;
    
    cin >> n;
    ans = 0;

    for(int i=0; i<n; i++){
        cin >> q;
        if(q != 3) cin >> x;
        
        if(q == 1){
            if(balls[x] == 0) ans++;
            balls[x]++;
        }else if(q == 2){
            if(balls[x] == 1) ans--;
            balls[x]--;
        }else if(q == 3){
            cout << ans << endl;
        }
    }

    return 0;

}