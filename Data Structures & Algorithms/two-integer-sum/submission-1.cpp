class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> prevMap;

        for(int i=0;i<n;i++){
            int comp = target - nums[i];
            if(prevMap.find(comp) != prevMap.end()){
                return {prevMap[comp], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};
