class Solution {
public:
    string intToRoman(int num) {
        vector<string> r1={"I","II","III","IV","V","VI","VII","VIII","IX"};
        vector<string> r2={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string> r3={"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string> r4={"M","MM","MMM"};
        string s="";
        if(num/1000!=0){
            s+=r4[num/1000-1];
            num-=num/1000*1000;
        }
        if(num/100!=0){
            s+=r3[num/100-1];
            num-=num/100*100;
        }
        if(num/10!=0){
            s+=r2[num/10-1];
            num-=num/10*10;
        }
        if(num!=0){
            s+=r1[num-1];
        }
        return s;
    }
};
