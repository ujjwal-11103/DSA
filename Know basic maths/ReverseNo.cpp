// Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1



#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        cout << x << endl;
        int revNo = 0;
        while (x != 0)
        {
            int ld = x % 10;

            if (revNo > INT_MAX / 10 || (revNo == INT_MAX / 10 && ld > 7))
                return 0;
            if (revNo < INT_MIN / 10 || (revNo == INT_MIN / 10 && ld < -8))
                return 0;

            revNo = revNo * 10 + ld;
            x /= 10;
        }
        return revNo;
    }
};
int main()
{
    Solution sol;
    cout << sol.reverse(123) << endl;
    return 0;
}
