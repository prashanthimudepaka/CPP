#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(ms.find(1));
    int one=ms.count(1);
    cout<<one;
    auto range = ms.equal_range(1);

    // Erase all occurrences of the element
    ms.erase(range.first, range.second);
    if(!ms.empty())
    {
        cout<<"not empty";
    }
    else
    {
        cout<<"set is empty";
    }
    //ms.erase(ms.find(1),ms.find(1)+2);
}