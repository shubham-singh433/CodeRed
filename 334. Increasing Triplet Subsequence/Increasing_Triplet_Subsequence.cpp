// We iterate through the array nums while maintaining two variables, smallest and secondSmallest, to keep track of the smallest and second smallest elements encountered so far.
// At each step, we compare the current element with these two variables to find a possible increasing triplet sequence.
// If the current element is smaller than or equal to the smallest, we update smallest to the current element.
// If the current element is greater than smallest but smaller than or equal to secondSmallest, we update secondSmallest to the current element.
// If the current element is greater than both smallest and secondSmallest, we have found an increasing triplet sequence and return true.
// If we finish iterating through the array without finding an increasing triplet, we return false.
// This solution has a time complexity of O(n), where n is the size of the input array, as we traverse the array only once. It's an efficient and optimal solution to the problem.


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
       int len=nums.size();
       int left=INT_MAX;
       int mid=INT_MAX;
    if(len<2)
    {
        return false;
    }
    else
    for(int i=0;i<len;i++)
    {
        if(nums[i]<left)
        {
            left=nums[i];
        }
        if(nums[i]<mid&&nums[i]>left)
        {
            mid=nums[i];
        }
        if(nums[i]>mid&&nums[i]>left)
        {
            return true;
        }
    }
       return false;

    }
};