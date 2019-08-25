class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x / 10 == 0)
            return true;
        
        int reverse = 0;
        int limit = 1;
        if (x % 10 == 0) // if we have ending zeros check if exist in the beginning as well
        {
            return false;            
        }
        while (true)
        {           
            reverse = reverse * 10 + x % 10; 
            x = x / 10;
            limit *= 10 ;
            if (x == reverse)
                return true;
            else if (reverse > x )
                return false;
            else if (reverse == x/10 && x/10 != 0 && x/limit != 0) //to avoid middle zero removal
                return true;
        }
    }
};
