class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0 )
            return 0;
        if (nums.size() == 1)
            return 1;
        
        int nextPos=1;
        
        for (int i=1; i < nums.size() ; i++)
        {
            if (nums[i] > nums[i-1])
            {
                nums[nextPos] = nums[i];
                nextPos++;
            }
        }
        
        return nextPos;
    }
};
