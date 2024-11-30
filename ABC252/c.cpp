#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> slot(n);
    //vector<int> idx(10, 0);
    int time, ans;
    for(int i=0; i<n; i++) cin >> slot[i];
   
    ans = 1000;

    for(int i=0; i<10; i++){
        vector<int> idx(10, 0);
        for(int j=0; j<n; j++){
            for(int k=0; k<slot[j].size(); k++){
                if(int(slot[j][k]-'0') == i) idx[k]++;
            }
        }

        time = 0;
        for(int k=0; k<idx.size(); k++){
            time = max(time, k+(idx[k]-1)*10);
        }
        ans = min(ans, time);
    }

    cout << ans << endl;

    return 0;

}