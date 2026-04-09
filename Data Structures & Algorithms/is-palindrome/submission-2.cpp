class Solution {
public:
    bool isPalindrome(string s) {
  /*   METHOD1(TWO POINTER)   
     int l=0,r=s.size()-1;
     while(l<r){
        while(l<r && !isalnum(s[l]))l++;
        while(l<r && !isalnum(s[r]))r--;
        //compare
        if(tolower(s[l])!=tolower(s[r])){
            return false;
        }
        l++;
        r--;
        }  
        return true; 
   */     
        //METHOD 2 STACK
        
        string clean="";
        for(char c:s){
            if(isalnum(c))
                clean+=tolower(c);
        }
        string rev=clean;
        reverse(rev.begin(),rev.end());
        return clean==rev; 
        
    }
};
