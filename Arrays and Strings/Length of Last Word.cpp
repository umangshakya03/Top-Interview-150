class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n = s.size();
        int ind=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                ind=i;
                break;
            }
        }
        for(int i=ind;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};
