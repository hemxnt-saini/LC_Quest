#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v)
{

    int z = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < z; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
        z--;
    }
}

int main()
{
    vector<int> v = {4, 6, 7, 3, 2, 9, 2, 1};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    bubbleSort(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}