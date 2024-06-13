#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string Armstrong(int x)
    {
        int origNo = x;
        cout << x << endl;
        int container = 0;
        while (x != 0)
        {
            int ld = x % 10;
            container = container + (ld * ld * ld);
            x /= 10;
        }
        if (origNo == container)
        {
            return "Yes it is an Armstrong no";
        }
        else
        {
            return "No it is not an armstrong no";
        }
    }
};
int main()
{
    Solution sol;
    cout << sol.Armstrong(371) << endl;
    return 0;
}