#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    int bits;
    int cnt, ans, max_ans;
    cin >> n >> k;
    vector<string> s(n);
    string check_s;
    for(int i=0; i<n; i++) cin >> s[i];
 
    max_ans = 0;

    for(int bits=0; bits< 1<<n; bits++){
        check_s = "";

        for(int j=0; j<n; j++){
            if(bits & (1<<j)) check_s.append(s[j]);
        }
        
        sort(check_s.begin(), check_s.end());
 
        cnt = 1;
        ans = 0;
        for(int i=1; i<check_s.size(); i++){
            if(check_s[i] == check_s[i-1]){
                cnt++;
            }else{
                if(cnt == k) ans++;
                cnt = 1;
            }
        }

        if(cnt == k) ans++;
        max_ans = max(max_ans, ans);
        
    }

    cout << max_ans << endl;

    return 0;
}