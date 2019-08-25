class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //create the hash table
        unordered_map<int, int> umapping;
        vector<int> vect;
        int complement;
        for (int i = 0; i < nums.size(); i++)
        {
            //calculate the complement of nums[i]
            complement = target - nums[i];
            
            if (umapping.find(complement) != umapping.end()) //if complement exists
            {
                if (umapping.at(complement) != i) // if it's no the same element
                {
                    vect.push_back(umapping.at(complement));
                    vect.push_back(i);
                    return vect;
                }
            }
                        
            umapping.insert({ nums[i], i });
        }
        return vect;
    }
};
