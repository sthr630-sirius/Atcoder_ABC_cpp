#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, ans;
    cin >> n;
    vector<int> a(2*n);
    vector<int> b;
    for (int i=0; i<2*n; i++){
        cin >> a[i];
        a[i]--;
    }

    ans = 0;

    for (int i=0; i<n; i++){
        b.clear();
        for (int j=0; j<2*n; j++){
            if (i == a[j]) b.push_back(j);
        }
        
        if (b[1]-b[0] == 2) ans++;
    }

    cout << ans << endl;
    return 0;

}