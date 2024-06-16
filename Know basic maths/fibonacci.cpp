// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;

//     int n = 2;
//     int next;

//     int a = 0, b = 1;
//     cout << a << " " << b<<" ";

//     while (n != N)
//     {
//         next = a + b;
//         cout << next << " ";
//         a = b;
//         b = next;
//         n++;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    int fibo(int N)
    {

        if (N <= 1)
            return N;

        int left = fibo(N - 1);
        int right = fibo(N - 2);

        return (left + right);
    }
};

int main()
{
    Solution sol;
    cout << sol.fibo(9);
}