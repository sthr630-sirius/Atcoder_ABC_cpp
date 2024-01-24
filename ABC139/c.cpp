#include<iostream>
#include<vector>
using namespace std;
/*
dp[i] マスiまでの移動の最大値
*/
int main(){
    long n;
    cin >> n;
    vector<long long> height(n);
    vector<int> dp(n, 0);
    int ans;

    ans = 0;

    for(int i=0; i<n; i++) cin >> height[i];
    for(int i=1; i<n; i++){
        if(height[i-1]>=height[i]){
            dp[i] = dp[i-1]+1;
        }
    }

    for(auto counter:dp){
        if(counter >= ans) ans = counter;
    }

    cout << ans << endl;
    
    return 0;

}