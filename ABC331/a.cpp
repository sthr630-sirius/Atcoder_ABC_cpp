#include<iostream>
using namespace std;
int date_out(int y, int m, int d){
    cout << y << " " << m << " " << d << endl;
    return 0;
}

int main(){
    int M, D;
    int y, m, d;
    int next_y, next_m, next_d;
    cin >> M >> D;
    cin >> y >> m >> d;
    next_d = d + 1;
    if (next_d <= D){
        date_out(y, m, next_d);
        return 0;
    } else{
        next_d = next_d -D;
        next_m = m + 1;
        if (next_m <= M){
            date_out(y, next_m, next_d);
            return 0;
        } else{
            next_m = next_m - M;
            next_y = y + 1;
            date_out(next_y, next_m, next_d);
            return 0;
        }
    }
}