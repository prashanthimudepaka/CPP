#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:";
    cin>>age;

    if(age>=18){
        cout<<"eligible for voting";
    }
    else {
        cout<<"you are not eligible";
    }
    return 0;
}