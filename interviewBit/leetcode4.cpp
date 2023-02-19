// question is : Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.
// The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.
// Return the quotient after dividing dividend by divisor.
// Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.
// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333.. which is truncated to 3.


#include<iostream>
using namespace std;


int divide(int dividend, int divisor) {
 if (divisor == 0) {
        return dividend >= 0 ? INT_MAX : INT_MIN;
    }
    if (dividend == 0) {
        return 0;
    }

    bool is_negative = (dividend < 0) || (divisor < 0);
    long long abs_dividend = abs((long long) dividend);
    long long abs_divisor = abs((long long) divisor);

    int quotient = 0;
    while (abs_dividend >= abs_divisor) {
        int shift = 0;
        while (abs_dividend >= (abs_divisor << shift)) {
            shift++;
        }
        quotient += (1 << (shift - 1));
        abs_dividend -= (abs_divisor << (shift - 1));
    }

    return is_negative ? -quotient : quotient;
    }

int main(){
    int dividend = 10;
    int divisor = 3;
    cout<<divide(dividend,divisor)<<endl;
}