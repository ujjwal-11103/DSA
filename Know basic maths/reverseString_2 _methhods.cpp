// #include <bits/stdc++.h>
// using namespace std;

// // using recursion and swaping function
// class Solution
// {
// public:
//     bool checkPalindrome(int i, string s)
//     {
//         string origstr = s;
//         if (i >= (s.size()) / 2)
//         {
//             if (s == origstr)
//                 return true;
//             else
//                 return false;
//         }
//         else
//         {
//             swap(s[i], s[s.size() - i - 1]);
//         }
//         return checkPalindrome(i + 1, s);
//     }
// };

// int main()
// {
//     string s = "MADAM";
//     Solution sol;
//     cout << sol.checkPalindrome(0, s);
// }

// whithout using recursion

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "MADAM";
    string origstr = s;

    for (int i = 0; i <=s.size()/2; i++)
    {
        if (i >= (s.size() / 2))
        {
            if (s == origstr)
            {
                cout << "true \n it is palindrome";
            }
            else
                cout << "Not a palindrome";
        }
        swap(s[i], s[s.size() - i - 1]);
    }
}