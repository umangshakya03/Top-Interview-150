class Solution {
public:
    bool isChar(char c){
        return (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9');
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int p1=0;
        int p2=n-1;
        while(p1<p2){
            if(isChar(s[p1]) && isChar(s[p2])){
                if(tolower(s[p1])!=tolower(s[p2])) return false;
                p1++;
                p2--;
            }
            else if(!isChar(s[p1]) && !isChar(s[p2])){
                p1++;
                p2--;
            }
            else if(!isChar(s[p1])) p1++;
            else p2--;
        }
        return true;
    }
};
