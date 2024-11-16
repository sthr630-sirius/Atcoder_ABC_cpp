#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    bool is_ok;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    is_ok = true;

    for(int i=0; i<m; i++){
        auto itr = find(a.begin(), a.end(), b[i]);
        if(itr == a.end()){
            is_ok = false;
            break;
        }else{
            a.erase(itr);
        }
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}