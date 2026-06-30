#include <iostream>
#include<map>
using namespace std;

int main(){

map< string, int > m;

m["tv"] = 100;
m["pc"] = 50;
m["phone"] = 100;
m["headphone"]= 40;

for(auto p: m){
    cout<< p.first << " "<< p.second << endl;
}

    return 0;
}
