class Solution {
public:
    vector<vector<int>>result;
    void solve(int i,vector<int>& arr, int target,vector<int>&temp){
        //base case
        if(target==0){
            result.push_back(temp);
            return;
        }

        if(i>=arr.size()|| target<0)return;
        //take element
        temp.push_back(arr[i]);
        solve(i,arr,target-arr[i],temp);//same index(reuse allowed)

        //backtracking
        temp.pop_back();
        //not taking element
        solve(i+1,arr,target,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>temp;
        solve(0,arr,target,temp);
        return result;
        
    }
};
