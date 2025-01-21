class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int len=0;
        int ind=0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            while(ind<i && mpp[s[i]]>1){
                mpp[s[ind]]--;
                ind++;
            }
            len=max(len,i-ind+1);
        }
        return len;
    }
};