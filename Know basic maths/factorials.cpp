#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> vec;
        long long fact = 1;
        for (long long i = 1; i <= N; i++)
        {
            fact = fact * i;
            if (fact <= N)
            {
                vec.push_back(fact);
            }
            if (fact > N)
            {
                break;
            }
        }
        return vec;
    }
};

int main()
{

    Solution ob;
    vector<long long> ans = ob.factorialNumbers(5);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
    return 0;
}
