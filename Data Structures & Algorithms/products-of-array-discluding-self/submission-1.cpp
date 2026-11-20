class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod1 = 1;
        int prod2 = 1; //without 0
        int zero_count = 0;
        vector<int> result;
        for(int i=0;i<n;i++){
            prod1 = prod1*nums[i];
            if(nums[i] == 0){
                zero_count++;
                continue;
            }
            prod2 = prod2 * nums[i];
        }
        for(auto &num : nums){
            if(num == 0){
                result.push_back(zero_count > 1 ? 0 : prod2);
                continue;
            }
            result.push_back(prod1/num);
        }
        return result;
    }
};
