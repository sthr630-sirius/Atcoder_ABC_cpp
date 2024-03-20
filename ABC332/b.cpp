#include<iostream>
using namespace std;
int main(){
    int k, g, m;
    int glass, cup;
    cin >> k >> g >> m;
    glass = 0;
    cup = 0;

    for (int i=0; i<k; i++){
        if (glass == g) glass = 0;
        else if (cup == 0) cup = m;
        else {
            if (g-glass >= cup){
                glass += cup;
                cup = 0;
            } else{
                cup -= (g - glass);
                glass = g;
            }
        }
    }

    cout << glass << " " << cup << endl;
    return 0;

}