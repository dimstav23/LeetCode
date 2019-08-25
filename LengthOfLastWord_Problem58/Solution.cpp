class Solution {
public:
    int lengthOfLastWord(string s) {
        int curr_length = 0;
        int last_length = 0;
        for (char const &c: s) 
        {
		    if (c==' ')
            {
                if (curr_length != 0)
                {
                    last_length = curr_length;
                    curr_length = 0;
                }                
            }
            else
            {
                curr_length++;
            }
	    }
        if (curr_length == 0 && last_length != 0)
            return last_length;
        else
            return curr_length;
    }
};
