class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;

        for(auto num : nums)
         mp[num]++;
        for(auto a : mp)
        if(a.second >= 2)
         return a.first;
         return -1; 
    }
};