class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum=0;
        double sum=0;
        int i=0,j=0;
        while(j<nums.size())
        {
         sum=sum+nums[j];
            if(j-i+1==k)
            {   
             maxsum=max(maxsum,sum);
            sum=sum-nums[i];
            i++;
            j++;
            }
            else if(j-i+1<k){
                j++;
            }
        } 
        maxsum=maxsum/k;
        return maxsum;
 }
};