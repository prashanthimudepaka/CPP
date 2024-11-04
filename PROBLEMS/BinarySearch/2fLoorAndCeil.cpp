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
            ans=arr[mid];
        } else {
            
            left=mid+1;
        }
    }
    return ans;
     
}
int floorfun(vector<int>arr,int value)
{int left = 0;
    int right = arr.size()-1;
    int ans=-1;
    
    while (left<=right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] <= value) {
           
            
            left=mid+1;
            ans=arr[mid];
        } else {
            right = mid - 1;
       
        }
    }
    return ans;

}

int main() {
    vector<int> arr ;
    int n;
    int value;
    cout<<"enter size:"<<endl;
    cin>>n;
    cout<<"enter element to find ceil and floor"<<endl;
    cin>>value;
    cout<<"enter elements of array in sorted order:"<<endl;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    int ceil= lowerBound(arr, value);
    cout<<"given value:"<<value<<endl;
    cout<<"ceil ="<<ceil<<endl;
    int floor=floorfun(arr,value);
    cout<<" floor="<<floor<<endl;
    
    return 0;
}