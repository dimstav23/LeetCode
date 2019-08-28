class Solution {
public:
    int myAtoi(string str) {
        int n = str.length(); 
        long result=0;
        bool suffix = true;
        bool read = false;
        // declaring character array 
        char char_array[n + 1]; 

        // copying the contents of the 
        // string to char array 
        strcpy(char_array, str.c_str()); 

        for (int i = 0; i < n; i++) 
        {
            if (char_array[i] == 32)
            {
                if (read)
                    break;
                else
                    continue;
            }
            else
            {
                if (char_array[i] == 45 && !read) //minus
                {
                    suffix = false;
                    read = true;
                    continue;
                }
                else if (char_array[i] == 43 && !read) //plus
                {
                    suffix = true;
                    read = true;
                    continue;
                }
                if (char_array[i] < 48 || char_array[i] > 57)
                {
                    break;
                }
                read = true;
                result = 10 * result + char_array[i]-48;
                if (result > INT_MAX)
                {
                    if (suffix)
                        return INT_MAX;
                    else
                        return INT_MIN;
                }
            }
        }
        if (!suffix)
            return -1*result;
        return result;
    }
};
