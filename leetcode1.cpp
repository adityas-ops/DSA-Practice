#include <bits/stdc++.h>
using namespace std;
/*
You are given a string number representing a positive integer and a character digit.
Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.
Input: number = "123", digit = "3"
Output: "12"
Explanation: There is only one '3' in "123". After removing '3', the result is "12".

Input: number = "1231", digit = "1"
Output: "231"
Explanation: We can remove the first '1' to get "231" or remove the second '1' to get "123".
Since 231 > 123, we return "231".
*/


string removeDigit(string numbers, char digit) {
   // store all method in vector
   vector<string>temp;
   for(int i = 0; i<numbers.size();i++){
    string temp1 = numbers;
    if(temp1[i] == digit){
        temp1.erase(temp1.begin()+i);
        temp.push_back(temp1);
    }
    }
    // find max value
    string maxi = temp[0];
    for(int i = 0; i<temp.size();i++){
        if(temp[i]>maxi){
            maxi = temp[i];
        }
    }
    // convert max value to string
   
    return maxi;
   }

    
    
int main() {
   string number = "1231";
   char digit ='1';
    cout << removeDigit(number, digit) << endl;
    return 0;
}