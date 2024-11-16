#include<iostream>
#include<vector>
using namespace std;
int main(){
    int idx;
    vector<int> a(10);
    for(int i=0; i<10; i++) cin >> a[i];

    idx = 0;

    for(int i=0; i<3; i++){
        idx = a[idx];
    }

    cout << idx << endl;

    return 0;

}