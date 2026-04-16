class Solution {
public:
    string mergeAlternately(string s1, string s2 ) {
       string result="";
       int i=0;
       //takes alag alag 
       while( i<s1.size() && i<s2.size()){
        result=result+s1[i];// from s1
        result=result+s2[i];//from s2
        i++;
        }
     /*   
        //lastcharacter add krne ke liye 
        //     2 ways
        while(i<s1.size()){
           result+=s1[i];
           i++;
        }
        while(i<s2.size()){
           result+=s2[i];
           i++;
        }
    */
    result=result+s1.substr(i)+s2.substr(i);    
        return result;
       
       
       
    }
};