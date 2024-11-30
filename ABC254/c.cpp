#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int ai;
    vector<vector<int>> a(k);
    vector<int> swaped_a(n);
    bool is_ok;

    for(int i=0; i<n; i++){
        cin >> ai;
        a[i%k].push_back(ai);
    }

    for(int i=0; i<k; i++) sort(a[i].begin(), a[i].end());

    for(int i=0; i<k; i++){
        for(int j=0; j<a[i].size(); j++){
            swaped_a[i+j*k] = a[i][j];
        }
    }

    is_ok = true;

    for(int i=1; i<n; i++){
        if(swaped_a[i-1] > swaped_a[i]) is_ok = false;
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}