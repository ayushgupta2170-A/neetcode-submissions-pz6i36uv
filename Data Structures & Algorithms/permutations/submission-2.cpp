class Solution {
public:
    void solve(vector<int>&nums,vector<int>&curr,vector<vector<int>>&result,vector<bool>&used) {
        
        // base case
        if(curr.size()==nums.size()){
            result.push_back(curr);
            return;
        }

        for (int i=0;i<nums.size();i++) {
            
            // skip  element
            if(used[i])continue;

            // choose
            used[i]=true;
            curr.push_back(nums[i]);

            // explore
            solve(nums,curr,result,used);

            // backtrack
            curr.pop_back();
            used[i]=false;
        }
    }

    vector<vector<int>>permute(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>curr;
        vector<bool>used(nums.size(), false);

        solve(nums,curr,result,used);

        return result;
    }
};