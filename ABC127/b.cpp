#include<iostream>
using namespace std;
int main(){
    int r, d, x_now;
    int x;
    cin >> r >> d >> x_now;
    for (int i; i<10; i++){
        x = r*x_now - d;
        cout << x << endl;
        x_now = x;
    }

    return 0;
}