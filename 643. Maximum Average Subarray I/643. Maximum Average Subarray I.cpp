// Time Complexity:
// The given code uses a sliding window approach to process each element in the nums array once. In the worst case, both the i and j pointers will
//  move from 0 to n - 1, where n is the size of the input array. The loop only performs constant time operations inside it, such as addition, 
//  subtraction, and comparison. Therefore, the time complexity of the code is O(n), where n is the length of the nums array.

// Space Complexity:
// The code uses a constant amount of extra space regardless of the input size. The extra space is used to store variables like maxsum, sum, i, j,
//  and a few temporary variables used in the comparisons and assignments. Hence, the space complexity of the code is O(1), indicating constant
//   space usage.

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        double maxsum=INT_MIN;
        double sum=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            sum=sum+nums[j];
           
            if(j-i+1==k)
            {   
             maxsum=max(maxsum,sum);
              cout<<max(maxsum,sum);
            sum=sum-nums[i];
            i++;
            j++;
            }
            else if(j-i+1<k){
                j++;
            }
        } 
        maxsum=maxsum/k;
        // cout<<maxsum;
        return maxsum;
    }
}
