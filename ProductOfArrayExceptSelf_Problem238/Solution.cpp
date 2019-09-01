class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> answer(size);
        if (size == 0)
            return answer;
        else
            answer[0] = nums[0];
        
        for (int i = 1 ; i < size ; i++)
        {
            answer[i] = answer[i-1] * nums[i];
        }
        
        int rest = nums[size-1];
        answer[size-1] = answer[size-2];
        
        for (int i = size-2 ; i > 0 ; i--)
        {
            answer[i] = answer[i-1] * rest;
            rest *= nums[i];
        }
        answer[0] = rest;
        return answer;
    }
};
