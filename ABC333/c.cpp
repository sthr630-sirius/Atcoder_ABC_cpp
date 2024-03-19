#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> repunit = {1, 1, 1, 11, 11, 11, 111, 111, 111, 1111, 1111, 1111, 11111, 11111, 11111, 111111, 111111, 111111, 1111111, 1111111, 1111111, 11111111, 11111111, 11111111, 111111111, 111111111, 111111111, 1111111111, 1111111111, 1111111111, 11111111111, 11111111111, 11111111111, 111111111111, 111111111111, 111111111111};
    vector<long long> ans;

    for (int i=0; i<repunit.size()-2; i += 3){
        for (int j=i+1; j<repunit.size()-1; j += 3){
            for (int k=j+1; k<repunit.size(); k += 3){
                ans.push_back(repunit[i] + repunit[j] + repunit[k]);
            }
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans[n-1] << endl;

    return 0;

}