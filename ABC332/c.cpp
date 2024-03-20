#include<iostream>
using namespace std;
int main(){
    int n, plain_max;
    int logo_max;
    int plain, logo;
    string days;
    cin >> n >> plain_max;
    logo_max = 0;
    cin >> days;
    plain = plain_max;
    logo = logo_max;

    for (auto d:days){
        if (d == '0'){
            plain = plain_max;
            logo = logo_max;
        } else if (d == '1'){
            if (plain >= 1){
                plain--;
            } else if (plain == 0){
                if (logo >= 1){
                    logo--;
                } else if (logo == 0){
                    logo_max++;
                }
            }
        } else if (d == '2'){
            if (logo >= 1){
                logo--;
            } else if (logo == 0){
                logo_max++;
            }
        }
    }

    cout << logo_max << endl;
    return 0;

}