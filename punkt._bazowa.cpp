#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class punkt
{
protected:
    int x;
    int y;

public:
    void setPunkt(int x, int y)
    {
        this->x = x;
        this->y = y;
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