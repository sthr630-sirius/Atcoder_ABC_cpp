#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)n; ++i)
int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    int ans;
    set<int> num;
    string md;
    rep(i, n) cin >> d[i];

    ans = 0;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=d[i-1]; j++){
            md = to_string(i) + to_string(j);

            for (int l=0; l<md.size(); l++) num.insert(md[l]);
            if (num.size() == 1) ans++;
            num.clear();
        }
    }

    cout << ans << endl;
    return 0;

}