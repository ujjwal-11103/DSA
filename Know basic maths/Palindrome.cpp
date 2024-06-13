// Palindrome Number

// Given an integer x, return true if x is a 
// palindrome and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int origNo = x;
        int revNo = 0;
        while (x > 0)
        {
            int ld = x % 10;

            // Check for constraint
            if ((revNo > (INT_MAX / 10) || (revNo * 10 > (INT_MAX - ld))))
            {
                return false; // overflow would occur
            }
            revNo = (revNo * 10) + ld;
            x = x / 10;
        }
        if (revNo == origNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution sol;
    cout << sol.isPalindrome(1221) << endl;
    return 0;
}