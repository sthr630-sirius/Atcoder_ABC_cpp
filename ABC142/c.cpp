#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int a;
    cin >> n;
    vector<int> ans(n+1);

    ans[0] = 0;

    for (int i=0; i<n; i++){
        cin >> a;
        ans[a] = i+1;
    }

    for (int i=1; i<=n; i++){
        cout << ans[i];
        if (i < n) cout << " ";
    }

    cout << endl;
    
    return 0;
}