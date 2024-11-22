#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a, b;
    cin >> a >> b;
    double x, y;
    x = a / sqrt(pow(a,2) + pow(b,2));
    y = a / sqrt(pow(a,2) + pow(b,2));

    cout << x << " " << y << endl;

    return 0;

}