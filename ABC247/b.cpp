#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> first_name(n);
    vector<string> last_name(n);
    int ff_cnt, fl_cnt, lf_cnt, ll_cnt;
    bool is_ok;

    for(int i=0; i<n; i++){
        cin >> first_name[i];
        cin >> last_name[i];
    }

    is_ok = true;

    for(int i=0; i<n; i++){
        ff_cnt = 0;
        fl_cnt = 0;
        lf_cnt = 0;
        ll_cnt = 0;
        for(int j=0; j<n; j++){
            if(i != j){
                if(first_name[i] == first_name[j]) ff_cnt++;
                if(first_name[i] == last_name[j]) fl_cnt++;
                if(last_name[i] == first_name[j]) lf_cnt++;
                if(last_name[i] == last_name[j]) ll_cnt++;
            }
        }

        if(ff_cnt+fl_cnt > 0 && lf_cnt+ll_cnt > 0) is_ok = false;
    }

    if(is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}