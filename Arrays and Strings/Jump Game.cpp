class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int step=0;
        for(int i=0;i<n;i++){
            if(step<0) return false;
            else if(step<nums[i]){
                step=nums[i];
            }
            step--;
        }
        return true;
    }
};
