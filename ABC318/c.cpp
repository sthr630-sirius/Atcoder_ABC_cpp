#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long minLong(long long a, long long b){
    return (a < b) ? a : b;
}

int main(){
    using namespace std;
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> f(n);
    for(int i=0; i<n; i++) cin >> f.at(i);
    sort(f.rbegin(), f.rend());

    long long total_fee, d_days_fee;

    total_fee = 0;

    if(d == 1){
        for(int i=0; i<n; i++){
            total_fee += minLong(p, f.at(i));
        }
    }else{
        d_days_fee = f.at(0);

        for(int i=1; i<n; i++){
            d_days_fee += f.at(i);

            if((i+1)%d == 0){
                total_fee += minLong(p, d_days_fee);
                d_days_fee = 0;
            }
        }

        total_fee += minLong(p, d_days_fee);
    }

    cout << total_fee << endl;

    return 0;

}