class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int n=nums.size();
       //sort array 
       sort(nums.begin(),nums.end());

       for(int i=1;i<n;i++){   //1,2,3,3,4;
        if(nums[i]==nums[i-1]){
        return true;
        }
       }
       return false; 
    }
};