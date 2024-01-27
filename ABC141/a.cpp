#include<iostream>
#include<map>
using namespace std;
int main(){
    string w;
    cin >> w;
    map<string, string> weather;
    weather["Sunny"] = "Cloudy";
    weather["Cloudy"] = "Rainy";
    weather["Rainy"] = "Sunny";

    cout << weather[w] << endl;
    return 0;

}