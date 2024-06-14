#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long gcd(long long a, long long b)
    {
        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
        }
        return (a == 0) ? b : a;
    }

    // Function to compute both the LCM and GCD of two numbers
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        long long gcdValue = gcd(A, B);
        long long lcmValue = (A / gcdValue) * B; // To prevent overflow
        return {lcmValue, gcdValue};
    }
};

int main()
{
    // long long A, B;
    // cin >> A >> B;

    Solution ob;
    vector<long long> ans = ob.lcmAndGcd(5, 10);
    cout << "LCM = " << ans[0] << "\nGCD = " << ans[1] << endl;
    return 0;
}
