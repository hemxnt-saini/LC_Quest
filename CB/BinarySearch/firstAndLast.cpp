#include <iostream>
#include <vector>
using namespace std;

pair<int, int> firstAndlast(vector<int> v, int k)
{
    pair<int, int> p;

    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == k)
        {
            p.first = mid;
            e = e - 1;
        }
        else if (v[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    s = 0;
    e = v.size() - 1;

    while (s < e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == k)
        {
            p.second = mid;
            s = s + 1;
        }
        else if (v[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return p;
}

int main()
{
    vector<int> v = {1, 2, 5, 8, 8, 8, 8, 10, 12};
    int k;
    cin >> k;
    pair<int, int> p = firstAndlast(v, k);
    cout << "First: " << p.first << " Second: " << p.second;
}