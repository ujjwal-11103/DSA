
#include <bits/stdc++.h>
using namespace std;
// Pair
int main()
{
    // normal
    pair<int, int> p1 = {2, 3};
    cout << p1.first << endl;

    // multipe
    pair<int, pair<int, int>> p2 = {3, {4, 5}};
    cout << p2.second.first << endl;

    // array
    pair<int, int> parr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << parr[2].first;

    return 0;
}