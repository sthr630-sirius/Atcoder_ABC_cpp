#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++) cin >> h[i];

    int now_hight, cnt, ans;

    ans = 0;
    for(int delta=1; delta<n; delta++){
        for(int header=0; header<delta; header++){
            vector<int> target;
            for(int i=header; i<n; i+=delta){
                target.push_back(h[i]);
            }
        
            cnt = 0;
            now_hight = target[0];
            for(int i=0; i<target.size(); i++){
                if(now_hight == target[i]){
                    cnt++;
                }else{
                    now_hight = target[i];
                    ans = max(ans, cnt);
                    cnt = 1;
                }
            }
            ans = max(ans, cnt);    
        }        
    }

    cout << ans << endl;
    return 0;

}