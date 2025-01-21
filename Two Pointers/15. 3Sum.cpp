class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int s=i+1;
            int e=n-1;
            while(s<e){
                if(nums[i]+nums[s]+nums[e]==0){
                    ans.push_back({nums[i],nums[s],nums[e]});
                    s++;
                    e--;
                    while(s<e && nums[s]==nums[s-1]) s++;
                    while(s<e && nums[e]==nums[e+1]) e--;
                }
                else if(nums[i]+nums[s]+nums[e]>0){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return ans;
    }
};