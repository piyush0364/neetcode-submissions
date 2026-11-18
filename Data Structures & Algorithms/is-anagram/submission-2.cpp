class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> temp(26,0);
        int n = s.length();
        int m = t.length();
        if(n != m) return false;
        
        for(int i=0;i<n;i++){
            temp[s[i] - 'a']++;
            temp[t[i] - 'a']--;

        }
        for(int i=0;i<26;i++){
            if(temp[i] != 0) return false;
        }
        return true;
    }
};
