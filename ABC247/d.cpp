#include<iostream>
#include<deque>
using namespace std;
int main(){
    int q;
    int num, x, c;
    long long ans;
    deque<pair<int, int>> a;
    cin >> q;

    for(int i=0; i<q; i++){
        cin >> num;
        if(num == 1){
            cin >> x >> c;
            a.push_back(make_pair(x, c));
        }
        else{
            ans = 0;
            cin >> c;
            while(c > 0){
                if(c >= a.front().second){
                    ans += (long long)a.front().first*a.front().second;
                    c -= a.front().second;
                    a.pop_front();
                }else{
                    ans += (long long)a.front().first*c;
                    a.front().second -= c;
                    c = 0;
                    
                }
            }
            cout << ans << endl;
        }

        /*
        cout << "deque status" << endl;
        for(auto pi:a){
            cout << pi.first << " " << pi.second << endl;
        }
        cout << " " << endl;
        */

    }

    /*
    cout << " " << endl;
    for(auto pi:a){
        cout << pi.first << " " << pi.second << endl;
    }
    */

    return 0;

}
