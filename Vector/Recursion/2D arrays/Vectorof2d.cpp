#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> >arr;

    vector<int> a{1,2,3};
    vector<int> b{2,4,6};
    vector<int> c{1,3,7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    
    int row =3;
    int col = 5;

    // vector<vector<int> >arr(row, vector<int>(col, 0));

    for(int i=0; i<arr.size(); i++){ // no row arr.size();
        for(int j=0; j<arr[0].size(); j++){ // now of col arr[0].size() // for the diffrent size of cols where we can use arr[i].size();
            cout<< arr[i][j]<<" ";
        }
        cout<<endl; 
    }

    return 0;
}