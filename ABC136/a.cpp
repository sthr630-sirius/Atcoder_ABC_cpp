#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    int delta;
    cin >> a >> b >> c;
    delta = a - b;
    cout << max((c-delta), 0) << endl;
    return 0;
}