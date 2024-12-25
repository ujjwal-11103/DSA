#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        // int minValInd = i;
        // for (int j = i + 1; j < n; j++)
        // {
        //     if (arr[j] < arr[minValInd])
        //     {
        //         minValInd = j;
        //     }
        // }
        // swap(arr[i], arr[minValInd]);
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 & arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    // bubble_sort(arr, n);

    // insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}