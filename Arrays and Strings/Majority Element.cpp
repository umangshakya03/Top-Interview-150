class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele=nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==ele){
                count++;
            }
            else if(count>=1 && ele!=nums[i]){
                count--;
            }
            else{
                count=1;
                ele=nums[i];
            }
        }
        return ele;
    }
};
