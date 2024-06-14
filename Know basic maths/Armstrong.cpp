#include <bits/stdc++.h>
#include <math.h>

using namespace std;
class Solution
{
public:
    string Armstrong(int x)
    {
        int origNo = x;

        int count = 0;

        cout << x << endl;

        int container = 0;

        //counting digits
        int countDig = x;
        while (countDig > 0)
        {
            count++;
            countDig = countDig / 10;
        }

    
        while (x != 0)
        {
            int ld = x % 10;
            container = container + pow(ld, count);
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
    cout << sol.Armstrong(1634) << endl;
    return 0;
}