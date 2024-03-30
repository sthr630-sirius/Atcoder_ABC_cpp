#include<iostream>
using namespace std;
int main(){
    int n;
    int digit100, digit10, digit;
    cin >> n;

    for (int i=n; i<1000; i++){
        digit100 = i/100;
        digit = i%10;
        digit10 = (i%100-i%10)/10;
        if (digit100*digit10 == digit){
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;

}