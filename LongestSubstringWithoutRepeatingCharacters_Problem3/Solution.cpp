class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=1; //at least one character will  be in
        int start=0;
        unordered_map<char, int > umap;
        if (s.length())
        {
            for (int i=0 ; i < s.length() ; i++)
            {
            //if character in current substring             
                if (umap.find(s[i]) != umap.end())
                {
                    //if the position is bigger than our current start
                    //update max and start values
                    if (umap.at(s[i]) >= start)
                    {
                        max = i - start > max? i - start: max;
                        start = umap.at(s[i]) + 1;
                    }                 
                    umap.erase(s[i]);
                } 
            
            umap.insert({ s[i], i });            
            }
            max = s.length() - start > max? s.length() - start : max;
            return max;
        }
        else
        {
            return 0;
        }
        
    }
};
