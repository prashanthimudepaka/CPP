/*Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
The union of two arrays can be defined as the common and distinct elements in the two arrays.
NOTE: Elements in the union should be in ascending order.*/
// ar1[] = 1 2 3 4 5 6
// ar2[] = 2 3 4 4 5 6 
 //res[]=1 2 3 4 5 6 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    int n2;
    cout<<"size of first array:";
    cin>>n1;
    cout<<"size of second array:";
    cin>>n2;
    vector<int> s1;
    vector<int> s2;
    vector<int> v3;
    set<int> res;
    cout<<"enter elements for second array:";

    for(int i=0;i<n1;i++)
    { 
        int value;
        cin>>value;
        s1.emplace_back(value);
    }
    cout<<"enter elements for second array:";
    for(int i=0;i<n2;i++)
    { 
        int value;
        cin>>value;
        s2.emplace_back(value);
    }
    for(int i=0;i<n1;i++)
    {
        res.insert(s1[i]);
    }
     for(int i=0;i<n2;i++)
    {
        res.emplace(s2[i]);
    }
    for(auto it:res)
    {
        cout<<it;
    }

    return 0;
}


