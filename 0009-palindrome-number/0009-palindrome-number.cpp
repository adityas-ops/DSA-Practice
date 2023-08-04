class Solution {
public:
    bool isPalindrome(int x) {
        // if(x <0){
        //     return false;
        // }
        string s = to_string(x);
        string a = s;
        reverse(a.begin(),a.end());
      
        if(s == a){
            return true;
        }
        else{
            return false;
        }
    }
};