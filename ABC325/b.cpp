#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int person;
    int start_time;
    int ans;
    cin >> n;
    vector<vector<int> > company(n, vector<int>(2));

    ans = 0;

    for (int i=0; i<n; i++){
        cin >> company.at(i).at(0) >> company.at(i).at(1);
    }

    for (int i=0; i<24; i++){
        person = 0;
        for (auto& c:company){
            start_time = (i+c.at(1))%24;
            if (9 <= start_time and start_time <= 17){
                person += c.at(0);
            }
        }
        
        ans = max(ans, person);
    }
        
    cout << ans << endl;
    return 0;
}