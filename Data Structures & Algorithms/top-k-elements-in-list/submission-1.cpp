class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;
        unordered_map<int,int> count;
        
        for(int num : nums){
            count[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(auto &it : count){
            pq.push({it.second,it.first});

            if(pq.size() > k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            int x = pq.top().second;
            pq.pop();
            result.push_back(x);
        }
        return result;
    }
};
