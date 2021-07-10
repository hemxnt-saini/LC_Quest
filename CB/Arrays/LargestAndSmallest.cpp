#include <iostream>
#include <vector>

using namespace std;

pair<int, int> SAndL(vector<int> v)
{
    pair<int, int> p;

    int max = v[0];
    int min = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }

        if (v[i] < min)
        {
            min = v[i];
        }
    }

    p.first = min;
    p.second = max;

    return p;
}

int main()
{
    vector<int> v = {1, -4, 3, 8, -6, 7};
    pair<int, int> p = SAndL(v);

    cout << "Smallest: " << p.first << "  Largest: " << p.second << endl;
}