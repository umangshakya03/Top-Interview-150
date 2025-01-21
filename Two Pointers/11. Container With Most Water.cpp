class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int n = height.size();
        int s=0;
        int e=n-1;
        while(s<e){
            maxi=max(maxi,min(height[s],height[e])*(e-s));
            if(height[s]<height[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxi;
    }
};