#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    int t;
    int ans;

    vector<bool> tooth(n, true);
    ans = 0;

    for (int i=0; i<q; i++){
        cin >> t;
        if (tooth[t-1]){
            tooth[t-1] = false;
        } else{
            tooth[t-1] = true;
        }
    }

    for (int i=0; i<n; i++){
        if (tooth[i]){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;

}