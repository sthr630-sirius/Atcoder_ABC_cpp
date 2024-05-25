#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int h;
    int plant;
    cin >> h;
    plant = pow(2, 0);
    for (int i=1; i<=h; i++){
        if (plant > h){
            cout << i << endl;
            break;
        } else{
            plant += pow(2, i);
        }
    }

    return 0;

}