#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    for (auto value:v){
        cout << value << endl;
    }
    sort(v.begin(), v.end());
    for (auto value:v){
        cout << value << endl;
    }

    for (int i=0; i<n-1; i++){
        v[i+1] = (v[i]+v[i+1])/2;
    }

    cout << v[n-1] << endl;
    
    return 0;
}