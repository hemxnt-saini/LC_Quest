#include <iostream>
#include <vector>
using namespace std;

void chewNumber(vector<int> &v)
{

    if (v[0] != 9)
    {
        v[0] = 9 - v[0];
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > 4)
        {
            v[i] = 9 - v[i];
        }
    }
}

int main()
{
    vector<int> v = {8, 7, 3, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    chewNumber(v);
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}