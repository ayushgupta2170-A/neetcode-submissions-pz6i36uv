class Solution {
public:
    void reverseString(vector<char>& s) {
       //use STL fx..1st way
       /*
        reverse(s.begin(),s.end());*/

        //2nd way, two pointer
        int left=0,right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }


    }
};