#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void selectionSort(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        int min = i;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < v[min])
            {
                min = j;
            }
        }
        swap(v[i], v[min]);
    }
}

int main()
{
    vector<int> v = {4, 3, 5, 1, 2, 8, 7};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    selectionSort(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}