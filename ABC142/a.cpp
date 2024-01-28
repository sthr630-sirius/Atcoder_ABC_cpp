#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    int counter;
    cin >> n;
    counter = 0;
    for (int i=1; i<=n; i++){
        if (i%2 != 0) counter++;
    }

    cout << fixed;
    cout << setprecision(10) << (double)counter/(double)n << endl;

    return 0;
}