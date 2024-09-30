#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:";
    cin>>age;

    if(age>18){
        cout<<"eligible for voting";
    }
     else if(age==18){
        char a;
        cout<<"did you applied:y/n";
        cin>>a;
        if(a=='y'){
            cout<<"please cast your first vote";
        }
        else{
        cout<<"please apply to vote";
            
        }
    }
    
    else {
        cout<<"you are not eligible";
    }
    return 0;
}