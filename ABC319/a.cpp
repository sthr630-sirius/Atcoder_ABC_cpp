#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    string key;
    cin >> key;
    map<string, int> rate_data{
        {"tourist", 3858},
        {"ksun48", 3679},
        {"Benq", 3658},
        {"Um_nik", 3648},
        {"apiad", 3638},
        {"Stonefeang", 3630},
        {"ecnerwala", 3613},
        {"mnbvmar", 3555},
        {"newbiedmy", 3516},
        {"semiexp", 3481}
    };

    //for (auto ri:rate_data){
    //    cout << ri.first << " " << ri.second << endl;
    //}

    cout << rate_data[key] << endl;

    return 0;
}