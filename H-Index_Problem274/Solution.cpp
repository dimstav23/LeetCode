class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        if (size == 0 )
        {
            return 0;
        }
        if (size == 1 && citations[0] == 0)
        {
            return 0;
        }
        sort(citations.begin(), citations.end());
        for (int i = 0 ; i < size ; i++)
        {
            if (citations[i] >= size - i)
            {
                return size - i;
            }
        }
        return 1;
    }
};
