#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &a, int n)
{

    if (n == 1)
    {
        return;
    }

    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    bubbleSort(a, n - 1);
}

int main()
{
    vector<int> v{4, 3, 3, 3, 3, 1, 5, 7, 2, 3, 1};
    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    bubbleSort(v, v.size());
    for (auto x : v)
    {
        cout << x << " ";
    }
}