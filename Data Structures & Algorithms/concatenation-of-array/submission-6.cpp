class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      // int n=nums.size();
      /* vector<int>ans(2*n);
       for(int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
         }
         return ans;*/
         /* for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
          }
          return nums;*/

            
          int n=nums.size();  
          vector<int>ans(2*n);
          copy(nums.begin(),nums.end(),ans.begin());
            /* copy(nums.begin(),nums.end(),ans.begin());-->[3,1,2,_,_,_]
        copy()ek STL fx hai ,jo as it is copy krta hai,sorting nhi krta..*/
            copy(nums.begin(),nums.end(),ans.begin()+n);
             return ans;

    }
};