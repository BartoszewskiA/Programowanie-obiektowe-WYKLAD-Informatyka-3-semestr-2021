#include <iostream>
#include <sstream>

using namespace std;

class punkt
{
protected:
    int x;
    int y;

public:
    punkt(int X, int Y) : x(X), y(Y) { cout << "log: konstruktor klasy punkt" << endl; }
    int getX() { return x; }
    int getY() { return y; }
    string toString()
    {
        stringstream temp;
        temp << " (" << x << ";" << y << ") ";
        return temp.str();
    }
};
// ---------------------------------------------------------------------------------------
class punkt_3D : public punkt
{
protected:
    int z;

public:
    punkt_3D(int X, int Y, int Z) : punkt(X, Y), z(Z) { cout << "log: konstruktor  klasy punkt_3D" << endl; }
    int getZ() { return z; }
    string toString()
    {
        stringstream temp;
        temp << " (" << x << ";" << y << ";" << z << ") ";
        return temp.str();
    }
};
// ------------------------------------------------------------------------------------

class piksek_3D : public punkt_3D
{
protected:
    string kolor;

public:
    piksek_3D(int X, int Y, int Z, string K) : punkt_3D(X, Y, Z), kolor(K) 
    { 
        cout << "log: konstruktor  klasy piksek_3D" << endl; 
    }
    string getKolor() { return kolor; }
    string toString()
    {
        stringstream temp;
        temp << punkt_3D::toString();
        temp << "-"<<kolor<<" ";
        return temp.str();
    }

};

int main()
{
    piksek_3D p1(10,20,40,"czerwony");
    cout<< p1.toString();
    return 0;
}