class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int i=nums.size()-2;
       for(;i>=0;i--){
           if(nums[i]<nums[i+1]){
               break;
           }
       }
       if(i<0){
           reverse(nums.begin(),nums.end());
       }
       else{
           int j=nums.size()-1;
           for(;j>=0;j--){
               if(nums[j]>nums[i]){
                   break;
               }
           }
           swap(nums[i],nums[j]);
           reverse(nums.begin()+i+1,nums.end());
       }
    }
};