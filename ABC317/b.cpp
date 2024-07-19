#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int min_n;
    int s;
    cin >> n;
    vector<int> a(n);
    min_n = 9999;
    s = 0;

    for (int i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
        if (a[i] <= min_n) min_n = a[i];
    }

    cout << (min_n + (min_n+n))*(n+1) / 2 - s << endl;

    return 0;

}