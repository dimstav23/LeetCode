class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::vector<int>::iterator it;
        it = nums1.begin();
        nums1.erase(nums1.end() - n, nums1.end());
        int pos1 = 0;
        int pos2 = 0;
        while (pos2 < n)
        {
            if (pos1 < m)
            {
                if (nums1[pos1] >= nums2[pos2])
                {
                    nums1.insert(it + pos1, nums2[pos2]);
                    pos2++;
                    pos1++;
                    m++;
                }
                else
                {
                    pos1++;
                }
            }
            else
            {
                nums1.insert(it+pos1,nums2[pos2]);
                pos1++;
                pos2++;
            }
        }
        
    }
};
