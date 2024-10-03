/*#include <iostream>
#include <vector>

using namespace std;

// Function to find and print the maximum sum subarray
void maxSumSubarray(const vector<int>& arr) {
    int maxSum = arr[0]; // Initialize maximum sum
    int currentSum = arr[0]; // Initialize current sum
    int start = 0, end = 0, tempStart = 0; // Indices for subarrays

    for (int i = 1; i < arr.size(); i++) {
        currentSum += arr[i];

        // If the current element is greater than currentSum, start a new subarray
        if (arr[i] > currentSum) {
            currentSum = arr[i];
            tempStart = i; // Update temp start
        }

        // Update maximum sum and the indices
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart; // Update start index
            end = i; // Update end index
        }
    }

    // Print the maximum sum subarray and its sum
    cout << "Maximum sum subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nMaximum sum: " << maxSum << endl;
}

int main() {
    vector<int> arr = {1, -2, 3, 4, -1, 2, 1, -5, 4}; // Example array
    maxSumSubarray(arr); // Call the function
    return 0;
}
*/





// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_map<int,int> mp;
//   vector<int> arr = {1, 2, 3};  // Example input array
//     int n = arr.size();
  
// int sum;
//     // Vector to store all subarrays
//     vector<vector<int>> v;
//     vector<int> s;
//     int maxi=0;
//     // Generate all subarrays
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             vector<int> subarray;
//               sum=0;
//             // Collect elements for the current subarray
//             for (int k = i; k <= j; k++) {
//                 subarray.push_back(arr[k]);
//                 sum=sum+arr[k];
                
//             }
//             // Adding the subarray to the vector of vectors
//             v.push_back(subarray);
//             mp[sum]=v.size()-1;
//             maxi=max(sum,maxi);
            
//         }
//     }
//       // cout<<"maximum sum:- "<<maxi<<" "<<v[mp[maxi]];
//        for(auto i:mp)
//        {
//            cout<<i.first<<"  "<<i.second<<endl;
//        }

   
//     return 0;
// }
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
