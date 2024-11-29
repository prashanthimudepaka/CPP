//https://leetcode.com/problems/minimum-size-subarray-sum/?envType=problem-list-v2&envId=binary-search

class Solution {
public:

int minimized(vector<int> nums, int target,int mid){
    int len=INT_MAX;
    int sum=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];
        cnt++;
      // If the subarray exceeds the mid length, shrink the window
            if (cnt > mid) {
                sum -= nums[i - mid];
                cnt--;
            }

            // Check if the current subarray satisfies the condition
            if (sum >= target) {
                return true;
            }
        }

        return false;
    }

    int minSubArrayLen(int target, vector<int>& nums) {
        int l=1;
        int h=nums.size();
        int ans=0;
        while(l<=h)
        {
            
            int mid=l+(h-l)/2;
            if(minimized(nums,target,mid))
            {
                    ans=mid;
                    h=mid-1;
            }
            else
            {

                l=mid+1;
            }
        }
        return ans;
    }
};
//sliding window technique

class Solution {
public:

int minimized(vector<int> nums, int target,int mid){
    int sum = 0, len = INT_MAX;
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                len = min(len, right - left + 1);
                sum -= nums[left++];
                cout<<" "<<sum<<endl;
            }
            
        }
        return len <= mid;

      
    }

    int minSubArrayLen(int target, vector<int>& nums) {
        int l=1;
        int h=nums.size();
        int ans=0;
        while(l<=h)
        {
            
            int mid=l+(h-l)/2;
            if(minimized(nums,target,mid))
            {
                    ans=mid;
                    h=mid-1;
            }
            else
            {

                l=mid+1;
            }
        }
        return ans;
    }
};