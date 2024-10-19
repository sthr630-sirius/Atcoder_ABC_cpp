#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    for(int i=0; i<n; i++) cin >> l[i];

    sort(l.rbegin(), l.rend());

    cout << max(0, t - l[p-1]) << endl;
    return 0;
    
}