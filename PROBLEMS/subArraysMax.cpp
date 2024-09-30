





#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
  vector<int> arr = {1, 2, 3};  // Example input array
    int n = arr.size();
  
int sum;
    // Vector to store all subarrays
    vector<vector<int>> v;
    vector<int> s;
    int maxi=0;
    // Generate all subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> subarray;
              sum=0;
            // Collect elements for the current subarray
            for (int k = i; k <= j; k++) {
                subarray.push_back(arr[k]);
                sum=sum+arr[k];
                
            }
            // Adding the subarray to the vector of vectors
            v.push_back(subarray);
            mp[sum]=v.size()-1;
            maxi=max(sum,maxi);
            
        }
    }
      // cout<<"maximum sum:- "<<maxi<<" "<<v[mp[maxi]];
       for(auto i:mp)
       {
           cout<<i.first<<"  "<<i.second<<endl;
       }

   
    return 0;
}
/*
int main()
{
    unordered_map<int,int> mp;
  vector<int> arr = {1, 2, 3};  // Example input array
    int n = arr.size();
  
int sum;
    // Vector to store all subarrays
    vector<vector<int>> v;
    vector<int> s;
    int maxi=0;
    // Generate all subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> subarray;
              sum=0;
            // Collect elements for the current subarray
            for (int k = i; k <= j; k++) {
                subarray.push_back(arr[k]);
                sum=sum+arr[k];
                
            }
            // Adding the subarray to the vector of vectors
            v.push_back(subarray);
            mp[sum]=v.size()-1;
            maxi=max(sum,maxi);
            
        }
    }
        cout<<"maximum sum:- "<<maxi<<" "<<v[mp[maxi]];

    for(auto el:mp)
    {
        
    }
    // Output all subarrays
    cout<<"All subarrays are:" << endl;
    for (auto sub : v) {
        for (int elem : sub) {
            cout<< elem << " ";
        }
        cout << endl;
    }*/
    // int maxi=s[0];
    // for(int i=1;i<s.size();i++)
    // {   if(s[i]>maxi)
    //     maxi=s[i];
    // }
    // cout<<"maximum sum is "<<maxi;

    //return 0;
