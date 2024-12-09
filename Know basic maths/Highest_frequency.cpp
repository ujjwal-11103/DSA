#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the sixe of the array :\n";
    int n;
    cin >> n;

    cout << "Enter those elements :\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    cout << "The frequency of the elments are :\n";

    for (const auto &pair : mpp)
    {
        cout << pair.first << ":" << pair.second << endl;
    }

    int maxKey = 0;
    int maxValue = 0;

    for (const auto &pair : mpp)
    {
        if (pair.second > maxValue)
        {
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }

    cout << "The Highest frequency of the element are :\n";
    cout << maxKey << ":" << maxValue;
}
