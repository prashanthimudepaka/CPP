#include<bits/stdc++.h>
using namespace std;
int main(){
  
    vector<int> vec;
    
    
    vec.assign(5, 10);
     for (int i : vec) {
        cout << i << " ";
    }
vector<int> a = {11,12,13,14,15};
    vector<int> b={6,7,8,9,10};
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2;

   //1
    vec2.assign(vec1.begin(), vec1.end());
    //why cant we use vec1[0]

   
cout<<"copy of one vector to other"<<"\n";
    for (int i : vec1) {
        cout << i << " ";
    }
//2
 vec1.emplace_back(6);
vec1.emplace_back(7);
vec1.emplace_back(8);
vec1.emplace_back(9);
vec1.emplace_back(11);
//3
cout<<"elements at index 1: "<<vec1.at(1)<<"\n";
//4
cout<<"last element: "<<vec1.back()<<"\n";
//5
cout<<"capacity: "<<vec1.capacity()<<"\n";
//6,7
for(auto it=vec1.cbegin();it!=vec1.cend();++it){
cout<<*it<<" ";

}
//8
vec1.resize(15);
cout<<"vector size ="<<vec1.size()<<"\n";
//9
vec1.emplace(vec1.begin()+2,110);
cout<<"elemnts after emplace"<<"\n";
 for (int i : vec1) {
        cout << i << " ";
    }
   //10
    a.swap(b);
    cout<<"elements after swap\n";
     for (int i : b) {
        cout << i << " ";
    }
    a.insert(a.begin(),1000);
    cout<<"after insert:\n";
    for (int i : a) {
        cout << i << " ";
    }
    //why cant i use below code 
   /* if(a.find(5)!=a.end())
    {

    }*/
   if(find(a.begin(),a.end(),5)!=a.end())
   {

   cout<<"element 5 found in vector"<<endl; 
   }
   else{
    cout<<"not found 5"<<endl;
   }
    return 0;
}

