class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 0;
        if (digits[size-1] + 1 > 9)
        {
            digits[size-1] = 0;
            carry = 1;
        }
        else
        {
            digits[size-1]++;
        }
        for (int i = size-2 ; i >= 0; i--)
        {
            if (carry == 0)
            {
                return digits;
            }
            if (digits[i] + carry > 9)
            {
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                digits[i]++;
                carry = 0;
            }
        }
        if (carry)
        {
            auto it = digits.begin();
            it = digits.insert(it, 1); 
        }
        return digits;
    }
};
