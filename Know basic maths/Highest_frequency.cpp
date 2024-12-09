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

    // calculating highest frequency
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

    cout << "The Highest frequency of the element is :\n";
    cout << maxKey << ":" << maxValue << endl;
    // calculating lowest frequency
    int minKey = 0;
    int minValue = n;

    for (const auto &pair : mpp)
    {
        if (pair.second <= minValue)
        {
            minValue = pair.second;
            minKey = pair.first;
        }
    }

    cout << "The Lowest frequency of the element is :\n";
    cout << minKey << ":" << minValue;
}
