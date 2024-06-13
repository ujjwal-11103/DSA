#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v1;
    v1.push_back(5);
    v1.emplace_back(6);

    // Print vector elements using a loop
    for (int i = 0; i < v1.size(); ++i)
    {
        cout << v1[i] << "\n";
    }

    // vector ke andr sum pair bhi de skte hai
    vector<pair<int, int>> vp;

    vp.push_back({1, 2});
    for (int i = 0; i < vp.size(); ++i)
    {
        cout << vp[i].first << " " << vp[i].second << "\n";
    }

    // fixed size vector
    vector<int> vs(5, 100);

    for (int i = 0; i < vs.size(); ++i)
    {
        cout << vs[i] << "\n";
    }

    // getting elements from user into vector

    vector<int> myvector;

    int n;
    cout << "Enter how many numbers you are going to add= ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int myelement;
        cout << "Enter the " << i + 1 << " number= ";
        cin >> myelement;

        myvector.push_back(myelement);
    }

    cout << "The elements are=\n";
    for (int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << " ";
    }

    // pointer type vector
    vector<int>::iterator it = myvector.begin();
    cout << "\n"
         << *(it) << "\n";

    //  printing the size of the vector
    cout << "The size of vector = " << myvector.size() << "\n";
    cout << "The vector.end() contains = " << *(myvector.end()) << "\n"; // the .end means it points to the element after the last elemet

    //  printing the elements of vector using iterator
    for (vector<int>::iterator it = myvector.begin(); it < myvector.end(); it++)
    {
        cout << *(it) << " ";
    }

    // vector<int>::iterator it = myvector.begin()
    // to  write in short we write

    cout << "\nIterating using auto=" << endl;
    for (auto it = myvector.begin(); it < myvector.end(); it++)
    {
        cout << *(it) << " ";
    }

    // issse bhi asan tarika

    cout << "\nAssan tarike se iterating=\n";
    for (auto it : myvector)
    {
        cout << it << " ";
    }

    return 0;
}
