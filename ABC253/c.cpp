#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int q;
    int x, c;
    string query;
    cin >> q;
    map<int, int> box;
    for (int i=0; i<q; i++){
        cin >> query;
        //cout << "query: " << query << endl;
        if (query == "1"){
            cin >> x;
            //cout << "case 1" << endl;
            box[x]++;
        } else if (query == "2"){
            cin >> x >> c;
            if (box[x]-c > 0){
                box[x] -= c;
            }else{
                box.erase(x);
            }
            //cout << "case 2" << x << " " << c << endl;
        } else{
            //cout << "case 3" << endl;
            cout << box.rbegin()->first-box.begin()->first << endl;
        }

        /*
        cout << "{ ";
        for (auto& [key, value]:box){
            cout << key << ":" << value << ", ";
        }
        cout << " }" << endl;
        */
    }

    //cout << box.begin()->first << endl;
    //cout << box.rbegin()->first << endl;

    return 0;

}