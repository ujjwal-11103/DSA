#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> divisors(int x)
    {
        vector<int> numbers;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                numbers.push_back(i);
            }
        }
        return numbers;
    }
};
int main()
{
    solution sol;
    vector<int> result = sol.divisors(36);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
