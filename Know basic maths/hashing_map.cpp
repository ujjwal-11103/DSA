#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "How many queries youwant to check = \n";
    cin >> q;

    cout << "enter the queries = \n";
    while (q != 0)
    {
        int number;
        cin >> number;

        cout << "The " << number << " is occured for " << mpp[number] << " times" << endl;
        q--;
    }

    // Elements are automatically sorted by key
    for (const auto &pair : mpp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}