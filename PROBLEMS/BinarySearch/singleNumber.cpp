#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size(); //size of the array.

    //Edge cases:
    if (n == 1) return arr[0];
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if arr[mid] is the single element:
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

        //we are in the left:
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])
                || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            //eliminate the left half:
            low = mid + 1;
        }
        //we are in the right:
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }

    // dummy return statement:
    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}



/*#include<bits/stdc++.h>
using namespace std;
 int singlenum(vector<int> v)
 {
    int l=0;
    int n=v.size();
    int h=n-1;
    if(v[l]!=v[l+1]) return v[l]; 
    if(v[h]!=v[h-1]) return  v[h];
    l=1,h=n-2;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(v[mid]!=v[mid+1] && v[mid]!=v[mid-1])
        {
            return v[mid];
        }
        if((mid%2!=0 && v[mid]==v[mid-1])||(mid%2==0 && v[mid]==v[mid+1]))
        {
                l=mid+1;
        }
        else{
            h=mid-1;

        }
    }


    return -1;
 }

int main()
{
    vector<int> v={1,1,2,2,3,3,4,4,5,5,6};
    int out=singlenum(v);
    cout<<out;
    return 0;
}*/