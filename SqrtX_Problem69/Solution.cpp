class Solution {
public:
    int mySqrt(int x) {
        int min = 1;
        int max;
        if (x > 4)
            max = x/2;
        else
            max = x;
        
        while (max >= min)
        {
            long long int mid = min + (max-min)/2;
            long long int sqMid = mid * mid;
            if (sqMid > x)
            {
                max = mid - 1;
            }
            else if (sqMid < x)
            {
                min = mid + 1;
            }
            else
            {
                return mid;
            }
        }        
        
        return min-1;
    }
};
