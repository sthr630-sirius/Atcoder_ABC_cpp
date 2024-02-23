#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    long long passenger;
    cin >> n;
    passenger = 0;
    vector<long long> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    for (int i=0; i<n; i++){
        passenger += a[i];
        if (passenger < 0) passenger = 0;
    }

    cout << passenger << endl;

    return 0;

}