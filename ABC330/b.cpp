#include<iostream>
using namespace std;
int main(){
    int n, l, r;
    int a;
    cin >> n >> l >> r;
    for (int i=0; i<n; i++){
        cin >> a;
        if (a <= l) cout << l << " ";
        else if (l < a and a < r) cout << a << " ";
        else cout << r << " ";
    }

    cout << endl;
    return 0;

}