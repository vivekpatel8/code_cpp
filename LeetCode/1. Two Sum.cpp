//https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        vector<int> ans;
        int i = 0;
        for(auto x : nums){
            if(um.count(target - x)){
                ans.push_back(um[target - x]);
                ans.push_back(i);
            }
            else{
                um[x] = i;
            }
            i++;
        }
        return ans;
    }
};
