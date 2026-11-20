class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> count;
        for(int x : nums){
            count[x]++;
        }

        vector<vector<int>> bucket(n+1);

        for(auto &it : count){
            bucket[it.second].push_back(it.first);
        }
        vector<int> result;

        for(int freq=n; freq>=1;freq--){
            for(auto &num : bucket[freq]){
                result.push_back(num);

                if(result.size() == k) return result;
            }
        }
        return result;
    }
};
