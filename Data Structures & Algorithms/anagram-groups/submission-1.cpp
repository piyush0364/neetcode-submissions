class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for(auto &str : strs){
            vector<int> freq(26,0);
            for(char &c : str){
                freq[c-'a']++;
            }
            string key;
            for(int i=0;i<26;i++){
                key += to_string(freq[i]) + "#";
            }
            mp[key].push_back(str);
        }
        for(auto &it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};
