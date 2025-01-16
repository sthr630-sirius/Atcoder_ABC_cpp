#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans, cnt;
    vector<int> h(n);
    for(int i=0; i<n; i++) cin >> h[i];

    //ans = 0;
    for(int i=0; i<n; i++){
        for(int delta=1; delta<n; delta++){
            cnt = 0;
            for(int j=i; j<n; j+=delta){
                if(h[i] == h[j]){
                    cnt++;
                }else{
                    break;
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;
    return 0;

}