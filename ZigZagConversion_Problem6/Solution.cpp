class Solution {
public:
    string convert(string s, int numRows) {
        
        if (numRows == 1)
            return s;
        
        int n = s.length(); 

        // declaring character array 
        char char_array[n + 1]; 

        // copying the contents of the 
        // string to char array 
        strcpy(char_array, s.c_str()); 
        s = "";
        int step;
        
        for (int row = 0; row < numRows ; row++)
        {
            if (row < n)
                s += char_array[row];
            for (step = 2*numRows-2 ; step-row < n ; step+= 2*numRows-2)
            {
                if (row == 0)
                {
                    s+=char_array[step];    
                }
                else if (row == numRows - 1)
                {
                    if (step+row < n)
                        s+=char_array[step + row];
                }
                else
                {
                    if (step - row < n)
                        s+=char_array[step-row];
                    if (step + row < n)
                        s+=char_array[step+row];
                }
            }        
        }        
        
        return s;
        
    }
};
