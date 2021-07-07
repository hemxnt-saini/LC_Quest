#include <iostream>
#include <ctime>
using namespace std;

int binarySearch(int a[], int n, int k)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == k)
        {
            return mid;
        }

        else if (a[mid] > k)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int key;
    cin >> key;
    time_t start = clock();
    int idx = binarySearch(a, n, key);
    time_t end = clock();

    if (idx)
    {
        cout << "Present at: " << idx << "Time tAKEN: " << end - start << "ms" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
}