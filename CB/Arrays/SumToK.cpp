#include <iostream>
#include <vector>
using namespace std;

void SumToK(vector<int> v, int k)
{
    int s = 0;
    int e = v.size() - 1;
    // pair<int, int> p;

    while (s < e)
    {
        if ((v[s] + v[e]) == k)
        {
            cout << v[s] << " " << v[e] << endl;
            s++;
            e--;
        }
        else if ((v[s] + v[e]) < k)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
}

int main()
{
    vector<int> v = {1, 3, 5, 7, 9, 11, 13};
    int k;
    cin >> k;
    SumToK(v, k);
    // pair<int, int> p = SumToK(v, k);

    // cout << p.first << " " << p.second << endl;
}