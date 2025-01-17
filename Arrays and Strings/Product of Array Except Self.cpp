class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        int pref=1;
        for(int i=0;i<n;i++){
            v.push_back(pref);
            pref*=nums[i];
        }
        int suff=nums[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]*=suff;
            suff*=nums[i];
        }
        return v;
    }
};
