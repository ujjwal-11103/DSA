
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void calc(long long x, long long& sum) {
        if (x == 0)
            return;
        else {
            calc(x - 1, sum);
            sum += (x * x * x);      // Given an integer n, calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till n-th term.
        }
    }

    long long sumOfSeries(long long n) {
        long long sum = 0;
        calc(n, sum);
        return sum;
    }
};

int main()
{

    Solution ob;
    cout << ob.sumOfSeries(5) << "\n";
}
