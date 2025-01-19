class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int n = s.size();
        string temp="";
        for(int i=0;i<=n;i++){
            if((s[i]==' ' || i==n) && !temp.empty()){
                v.push_back(temp);
                temp="";
            }
            else if(s[i]!=' '){
                temp+=s[i];
            }
        }
        reverse(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
            if(i!=v.size()-1) ans+=" ";
        }
        return ans;
    }
};
