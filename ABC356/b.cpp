#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    int x;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);

    bool is_ok;

    for (int i=0; i<m; i++) cin >> a[i];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> x;
            b[j] += x;
        }
    }

    is_ok = true;
    
    for (int i=0; i<m; i++){
        if (a[i] > b[i]) is_ok = false;
    }
    
    if (is_ok){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}