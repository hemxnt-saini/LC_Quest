#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// int main()
// {

// vector<pair<int, int>> v;
// int n;
// cin >> n;
// for (int i = 0; i < n; i++)
// {
//     int x, y;
//     cin >> x >> y;

//     v.push_back(make_pair(x, y));
// }

// sort(v.begin(), v.end());

// for (int i = 0; i < v.size(); i++)
// {
//     cout << v[i].first << " " << v[i].second << endl;
// }
// }

class Car
{
public:
    string carName;
    int x, y;

    Car() {}
    Car(string n, int x, int y)
    {
        carName = n;
        this->x = x;
        this->y = y;
    }

    int dist()
    {
        return x * x + y * y;
    }
};

bool compare(Car A, Car B)
{
    int da = A.dist();
    int db = B.dist();

    return da < db;
}

int main()
{
    int n;
    cin >> n;

    vector<Car> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        string name;
        cin >> name >> x >> y;

        Car c{name, x, y};
        v.push_back(c);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << "Car: " << v[i].carName << " Distance: " << v[i].dist() << " Location: " << v[i].x << "," << v[i].y << endl;
    }
}
