#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> a(n), b(m), c(n+m);
    bool is_ok;

    for (int i=0; i<n; i++){
        cin >> c.at(i).first;
        c.at(i).second = "a";
    }

    for (int i=n; i<n+m; i++){
        cin >> c.at(i).first;
        c.at(i).second = "b";
    }

    sort(c.begin(), c.end());

    is_ok = false;

    for (int i=0; i<n+m-1; i++){
        if (c.at(i).second == c.at(i+1).second & c.at(i).second == "a"){
            is_ok = true;
        }
    }

    if (is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}
