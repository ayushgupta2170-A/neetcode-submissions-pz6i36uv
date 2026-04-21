class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int>&curr,int index,vector<vector<int>>&result){
        //ifnegative no exist 
        if(target<0)return;

        //if exact target mil gya
        if(target==0){
            result.push_back(curr);
            return;
        }
        //loop chalao
        for(int i=index;i<candidates.size();i++){
            //for duplicates
            if(i>index && candidates[i]==candidates[i-1])continue;
            //elements add kro
            curr.push_back(candidates[i]);
            //explore using recursion
            solve(candidates,target-candidates[i],curr,i+1,result);
            //backtracking
            curr.pop_back();

        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

      vector<vector<int>>result;
      vector<int>curr;

      sort(candidates.begin(),candidates.end());
      ///recursion start
      solve(candidates,target,curr,0,result);

      return result;

    }
};
