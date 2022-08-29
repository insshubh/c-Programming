#include <iostream>

using namespace std;

class item
{
    int m, n;

public:
    item()
    {
        m = 10;
        n = 20;
    }

    void put()
    {
        cout << m << n;
    }
};

int main()
{
    item t;
    t.put();
}
