#include <iostream>
#include <sstream>

using namespace std;

class punkt
{
protected:
    int x;
    int y;

public:
    punkt(int X, int Y) : x(X), y(Y)
    {
        cout << "log: konstruktor z parametrami klasy punkt" << endl;
    }

    punkt()
    {
        cout << "log: konstruktor domyslany klasy punkt" << endl;
    }

    ~punkt()
    {
        cout << "log: destruktor klasy punkt" << endl;
    }

    string toString()
    {
        stringstream temp;
        temp << " (" << x << ";" << y << ") ";
        return temp.str();
    }

    int getX() { return x; }
    int getY() { return y; }
};

class punkt_v2 : public punkt
{
protected:
    int z;

public:
    punkt_v2()
    {
        cout << "log: konstruktor domyslany klasy punkt_v2" << endl;
    }

    punkt_v2(int X, int Y, int Z) : punkt(X, Y), z(Z)
    {
        cout << "log: konstruktor z parametrami klasy punkt_v2" << endl;
    }
    ~punkt_v2()
    {
        cout << "log: destruktor  klasy punkt_v2" << endl;
    }

};

int main()
{
    // punkt* p1 = new punkt(20,30);
    // delete p1;
    punkt_v2* p2 = new punkt_v2(20,30,40);
    delete p2;
    return 0;
}
