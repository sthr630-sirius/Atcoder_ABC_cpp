#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    int s1, s2;
    int ans;
    cin >> n;

    vector<int> w(n);
    ans = 100000;
    
    for(int i=0; i<n; i++){
        cin >> w[i];
    }

    for(int t=0; t<(n-1); t++){
        s1 = 0;
        s2 = 0;
        for(int i=0; i<=t; i++){
            s1 += w[i];
        }
        for(int i=t+1; i<n; i++){
            s2 += w[i];
        }

        ans = min(ans, abs(s1-s2));
    }

    cout << ans << endl;

    return 0;

}