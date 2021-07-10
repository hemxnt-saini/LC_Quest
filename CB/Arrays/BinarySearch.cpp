#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int k)
{
    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (v[mid] == k)
        {
            return mid;
        }
        else if (v[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {1, 2, 4, 5, 7, 9};
    int k;
    cin >> k;
    cout << binarySearch(v, k);
}