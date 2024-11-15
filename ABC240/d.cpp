#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int cnt;
    int pop_cnt;
    cin >> n;
    vector<int> a(n);
    vector<vector <int>> box;
    for(int i=0; i<n; i++) cin >> a[i];

    cnt = 0;

    for(int i=0; i<n; i++){
        if(box.size() == 0){
            box.push_back({a.at(i), 1});
            cnt++;
        }else{
            if(a.at(i) == box.back().at(0)){
                box.push_back({a.at(i), box.back().at(1)+1});
            }else{
                box.push_back({a.at(i), 1});
            }

            cnt++;

            if(box.back().at(0) == box.back().at(1)){
                pop_cnt = box.back().at(1);
                for(int j=0; j<pop_cnt; j++){
                    box.pop_back();
                    cnt--;
                }
            }
        }
        
        cout << cnt << endl;
    }

    return 0;
}