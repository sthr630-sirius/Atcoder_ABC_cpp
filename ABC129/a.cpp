#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> t(3);
    int ans;
    int tmp_ans;

    ans = 200;

    for (int i=0; i<3; i++){
        cin >> t[i];
    }

    for (int i=0; i<3; i++){
        tmp_ans = 0;
        for (int j=0; j<3; j++){
            if (i!=j) tmp_ans += t[j];
        }

        if (tmp_ans <= ans){
            ans = tmp_ans;
        }
    }

    cout << ans << endl;
    return 0;
}