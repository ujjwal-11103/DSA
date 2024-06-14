
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) // or i < n
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int countPrimes(int L, int R)
    {
        int count = 0;
        for (int i = L; i <= R; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    cout << sol.countPrimes(5, 10);
}
