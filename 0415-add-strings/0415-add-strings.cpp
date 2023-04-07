class Solution {
public:
    string addStrings(string num1, string num2) {
         int n1 = num1.size();
        int n2 = num2.size();
        int i = n1-1;
        int j = n2-1;
        int carry = 0;
        string ans = "";
        while(i>=0 || j>=0 || carry){
            int sum = 0;
            if(i>=0){
                sum+=num1[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }
            sum+=carry;
            carry = sum/10;
            sum = sum%10;
            ans = to_string(sum)+ans;
        }
        return ans;
    }
};