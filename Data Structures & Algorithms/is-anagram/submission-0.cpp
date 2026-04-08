class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        //method 1,TC=O(nlogn);
        if(s.size()!=t.size())
        return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
        */
        //METHOD 2 USING OUNORDERED MAP
        if(s.size()!=t.size())return false;
        unordered_map<char,int>mp;
        //map mein store kro elements ko
        for(char c:s){//s string se char leke c mein store kiya aur bdhate rho
            mp[c]++;
        }
        for(char c:t){
            mp[c]--;

            if(mp[c]<0)return false;//-1 nhi hona chahiye 
        }
        return true;
    }
};
