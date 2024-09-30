#include<bits/stdc++.h>

using namespace std;

// Function to print a 2D vector
int main(){
    vector<vector<int>> vec(4);
    vector<int>row;
    for (int i=0;i<4;i++) {
        //cout << "[ ";
        for (int j =0;j<4;j++) {
            int value;
            cin>>value;
            row.push_back(value);
        }
        vec.push_back(row );
  
    for (auto innerVec : vec) {
        //cout << "[ ";
        for (int value : innerVec) {
            cout << value << " ";
        }
       
    }
   
   return 0;
}

