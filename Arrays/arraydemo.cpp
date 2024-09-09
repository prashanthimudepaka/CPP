#include<iostream>
using namespace std;
int main(){
    int ar[]={1,2,6};
    int s = sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<s;i++)
    {
        cout<<ar[i]<<" , ";
    }
    return 0;
}
