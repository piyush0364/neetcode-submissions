class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int val = 0;
        for(int i=0;i<n;i++){
            val = target - nums[i];
            for(int j=i+1;j<n;j++){
                if(val == nums[j]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
