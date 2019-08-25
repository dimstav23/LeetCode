class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int j = size-1;
        int removals = 0;
        int temp;
        for (int i=0; i < size  ; i++)
        {          
            if (j < i)
                break;
            if (nums[i] == val)
            {
                removals++;
                while (nums[j] == val && j > i)
                {
                    j=j-1;
                    removals++;
                }
                nums[i] = nums[j];
                nums[j] = val; 
                j--;
            }            
        }                
        
        return size-removals;
    }
};
