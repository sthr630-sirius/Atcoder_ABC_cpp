#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int MOD;
    MOD = 998244353;
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    int ans;
    /*
    dp[i][j]:i番目の要素まで決定して、総和がjとなる総数
     Ai:1～m
     dp[i][j] = dp[i][j] + dp[i-1][j-Ai]
    */
    dp[0][0] = 1;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<k+1; j++){
            for(int a=1; a<m+1; a++){
                if(j-a >= 0) dp[i][j] = (dp[i][j] + dp[i-1][j-a])%MOD;
            }
        }
    }

    ans = 0;
    for(int j=0; j<k+1; j++) ans = (ans + dp[n][j])%MOD;

    cout << ans << endl;

    return 0;

}