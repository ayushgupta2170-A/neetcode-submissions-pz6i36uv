class Solution {
public:
    vector<vector<int>>result;

    void solve(int i,vector<int>& nums,vector<int>& temp){
        //base case
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }

        //backtracking
        temp.push_back(nums[i]);//take ith element
        solve(i+1,nums,temp);
        //not take ith element
        temp.pop_back();
        solve(i+1,nums,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>temp;//store subsets
        solve(0,nums,temp);
        return result;
        
    }
};