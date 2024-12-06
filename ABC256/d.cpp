#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b;
    int x, y;
    pair<int, int> now_section;

    for(int i=0; i<n; i++){
        cin >> x >> y;
        a[i] = {x, y};
    }

    sort(a.begin(), a.end());

    now_section = a[0];
    for(int i=1; i<n; i++){
        if(a[i].first <= now_section.second){
            if(now_section.second <= a[i].second){
                now_section.second = a[i].second;
            }else{
                continue;
            }
        }else{
            b.push_back(now_section);
            now_section = a[i];
        }
    }

    b.push_back(now_section);

    for(auto bi:b){
        cout << bi.first << " " << bi.second << endl;
    }

    return 0;

}