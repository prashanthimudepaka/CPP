#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(i);
    }
    cout<<"elements in vector"<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

   if(s.count(12)>0)
   {
    cout<<"12 is present";
   }
   else{
    cout<<"12 not present";
   }
   cout<<"size="<<s.size()<<endl;
   cout<<s.max_size();
   s.erase(1);
   for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
auto it = s.find(10); // Returns iterator to 10
if (it != s.end()) {
    cout<<"10 is found\n";
}
else{
    cout<<"element not found\n";
}
int n = s.size();  // n = 1 in this case
cout<<"size:"<<n<<endl;
if (s.empty()) {
    cout<<"set is empty\n";
}
else{
    cout<<"set contains elements\n";
}


set<int> st={1,5,20,30};
auto i = st.lower_bound(20);

    if (i != st.end()) {
        std::cout << "Lower bound of 20 is: " << *i << std::endl;  // Output: 30//greater than or equal to the value.
    } else {
        std::cout << "No element found!" <<endl;
    }
cout<<"lower bound: "<<*i;
auto k = st.upper_bound(5);  //(first element > 20)strictly greater than the value.


    if (k != st.end()) {
        std::cout << "Upper bound of 5 is: " << *k << endl;  
    } else {
        std::cout << "No element found!" << std::endl;
    }
    return 0;
}

