class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[ind]==nums[i]){
                count++;
                if(count<=2){
                    ind++;
                    nums[ind]=nums[i];
                }
            }
            else if(nums[ind]!=nums[i]){
                ind++;
                nums[ind]=nums[i];
                count=1;
            }
        }
        return ind+1;
    }
};
