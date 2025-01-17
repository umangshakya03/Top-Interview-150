class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> v(numRows);
        int ind=0;
        bool flag=true;
        int str=0;
        int i=0;
        while(i<s.size()){
            if(!flag){
                if(ind==0){
                    flag=true;
                    ind++;
                    continue;
                }
                else ind--;
                v[ind]+=s[i++];
            }
            else{
                v[ind]+=s[i++];
                if(ind==numRows-1){
                    flag=false;
                }
                else{
                    ind++;
                }
            }
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};
