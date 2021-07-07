#include <iostream>
#include <cstring>
using namespace std;

void RemoveConsecutive(char a[])
{
    int len = strlen(a);
    int j = 1;

    for (int i = 0; i < len; i++)
    {
        if (a[i] == a[j])
        {
            j++;
        }
    }
}

int main()
{
    char a[10];
    cin >> a;
    RemoveConsecutive(a);
    cout << a << endl;
}