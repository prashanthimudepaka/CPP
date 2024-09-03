#include<iostream>
using namespace std;
void sum(int &a,int &b){
    cout<<"a,b="<<a<<","<<b<<"\n";
    cout<<"sum="<<a+b;
    
}
int main(){
    int a=4;
    int b=32;
    sum(a,b);
    return 0;
}