#include<iostream>
using namespace std;
int main(){
    int sum_a;
    int a;
    sum_a = 0;
    for (int i=0; i<3; i++){
        cin >> a;
        sum_a += a;
    }

    if (sum_a>=22) cout << "bust" << endl;
    else cout << "win" << endl;
    return 0;
}