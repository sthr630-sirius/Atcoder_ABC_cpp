#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    int height_info;
    cin >> n;
    map<int, int> ans{};

    for(int i=0; i<n; i++){
        cin >> height_info;
        ans[height_info] = i+1;
    }

    //for (auto &[k, v]:ans){
    //    cout << k << ":" << v << endl;
    //}

    int idx = -1;

    for (int i=0; i<n; i++){
        cout << ans[idx];
        idx = ans[idx];
        if (i<n-1) cout << " ";
        else cout << endl;
    }

    return 0;

}