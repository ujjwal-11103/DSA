#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fact(int n)
    {
        if (n == 0)
            return 1;
        else
            return (n * fact(n - 1));
    }
};

int main()
{
    Solution sol;
    cout << sol.fact(5);
}