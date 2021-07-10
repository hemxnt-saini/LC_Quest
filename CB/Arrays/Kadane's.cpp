#include <iostream>
#include <vector>
using namespace std;

int SumC(vector<int> v)
{
    int cs = 0;
    int ms = 0;

    for (int i = 0; i < v.size(); i++)
    {

        cs = cs + v[i];
        if (cs < 0)
        {
            cs = 0;
        }

        ms = max(cs, ms);
    }
    return ms;
}

int main()
{
    vector<int> v = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    cout << SumC(v);
}