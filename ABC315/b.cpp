#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    int a, b;
    int all_days, half_days, days;
    cin >> m;
    vector<int> d(m);

    days = 0;
    for (int i=0; i<m; i++){
        cin >> d[i];
        days += d[i];
    }

    all_days = days;
    half_days = all_days/2+1;

    days = 0;
    for (int i=0; i<m; i++){
        days += d[i];
        if (days >= half_days){
            a = i+1;
            days -= d[i];
            b = half_days - days;
            break;
        }
    }

    cout << a << " " << b << endl;

    return 0;

}