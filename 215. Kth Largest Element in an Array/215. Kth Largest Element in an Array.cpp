class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int pointer=size-k;
        return nums[pointer];
    }
};



// Given nnn as the length of nums,

// Time complexity: O(n⋅log⁡n)O(n \cdot \log n)O(n⋅logn)

// Sorting nums requires O(n⋅log⁡n)O(n \cdot \log n)O(n⋅logn) time.

// Space Complexity: O(log⁡n)O(\log n)O(logn) or O(n)O(n)O(n)

// The space complexity of the sorting algorithm depends on the implementation of each programming language:

// In Java, Arrays.sort() for primitives is implemented using a variant of the Quick Sort algorithm, which has a space complexity of O(log⁡n)O(\log n)O(logn)
// In C++, the sort() function provided by STL uses a hybrid of Quick Sort, Heap Sort and Insertion Sort, with a worst case space complexity of O(log⁡n)O(\log n)O(logn)
// In Python, the sort() function is implemented using the Timsort algorithm, which has a worst-case space complexity of O(n)O(n)O(n)