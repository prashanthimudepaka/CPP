#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr,int value){
 int left = 0;
    int right = arr.size()-1;
    int ans=arr.size();
    
    while (left<=right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] >= value) {
           
            right = mid - 1;
            ans=mid;
        } else {
            
            left=mid+1;
        }
    }
    return ans;
     
}

int main() {
    vector<int> arr = {1,2,3,6,10};
    int value = 2;
    auto pos = upper_bound(arr.begin(),arr.end(),value);
    
    cout<<arr.end()-pos;
    
    return 0;
}