#include<iostream>
#include<vector>
#include<functional>

using namespace std;

int main(){
    int n;
    string name;
    int score;

    cin >> n;

    vector<tuple<int, string, int>> restaurante_data(n);

    for (int i=0; i<n; i++){
        cin >> name >> score;
        restaurante_data[i] = {i+1, name, score};
    }

    function cmp = [](const tuple<int, string, int> &x, const tuple<int, string, int> &y) -> bool{
        if(get<1>(x) != get<1>(y)){
            return get<1> (x) < get<1>(y);
        } else{
            return get<2>(x) > get<2>(y);
        }
    };

    sort(restaurante_data.begin(), restaurante_data.end(), cmp);
    
    for (const auto& restaurante: restaurante_data){
            cout << get<0>(restaurante) << endl;
    }

    return 0;
}