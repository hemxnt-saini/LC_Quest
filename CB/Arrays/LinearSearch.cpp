#include <iostream>
#include <vector>
using namespace std;

pair<bool, int> linearSearch(vector<int> v, int k)
{
    pair<bool, int> p;
    p.first = false;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == k)
        {
            p.first = true;
            p.second = i;
            return p;
        }
    }
    return p;
}

int main()
{

    vector<int> v{1, 3, 5, 2, 7, 8};

    // int a[] = {1, 3, 5, 2, 7, 8};
    // int n = sizeof(a) / sizeof(a[0]);
    int k;
    cin >> k;

    pair<bool, int> p = linearSearch(v, k);

    if (p.first)
    {
        cout << "Found At " << p.second << endl;
    }
    else
    {
        cout << "NOT Found";
    }
}