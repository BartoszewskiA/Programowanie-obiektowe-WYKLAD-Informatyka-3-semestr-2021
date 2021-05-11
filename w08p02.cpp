#include <iostream>
#include <sstream>

using namespace std;

class punkt
{
protected:
    int x;
    int y;

public:
    punkt(int X, int Y) : x(X), y(Y) {}
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
    punkt_3D(int X, int Y, int Z) : punkt(X, Y), z(Z) {}
    int getZ() { return z; }
    string toString()
    {
        stringstream temp;
        temp << " (" << x << ";" << y << ";" << z << ") ";
        return temp.str();
    }
};
// ------------------------------------------------------------------------------------
class piksel : public punkt
{
protected:
    string kolor;

public:
    piksel(int X, int Y, string K) : punkt(X, Y), kolor(K) {}
    string getKolor() { return kolor; }
    string toString()
    {
        stringstream temp;
        temp << punkt::toString();
        temp << "-"<<kolor<<" ";
        return temp.str();
    }
};

int main()
{

    return 0;
}