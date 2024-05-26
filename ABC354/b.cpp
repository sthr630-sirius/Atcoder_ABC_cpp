#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    int c, t;
    cin >> n;
    t = 0;
    vector<string> name(n);
    for (int i=0; i<n; i++){
        cin >> name[i] >> c;
        t += c;
    }

    sort(name.begin(), name.end());

    for (auto namei:name){
        cout << namei << endl;
    }

    cout << name[t%n] << endl;
    
    return 0;

}