class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int mid = high / 2;
        while (low != mid && high != mid)
        {
            if (nums[mid] > target)
            {
                high = mid;
                mid = (mid - low)/2;
            }
            else if (nums[mid] < target)
            {
                low = mid;
                mid += (high - mid) / 2;
            }
            else
            {
                return mid;
            }
        }
        if (mid == low && nums[low] < target)
            return low+1;
        else if (mid == low)
            return low;
        else if (mid == high && nums[high] < target)
            return high;
        else
            return high-1;
    }
};
