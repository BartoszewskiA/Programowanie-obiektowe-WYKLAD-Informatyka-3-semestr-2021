#include <iostream>
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

    void wypisz()
    {
        cout << " (" << x << ";" << y << ") ";
    }

    int getX() { return x; }
    int getY() { return y; }
};

class punkt_v2 : public punkt
{
private:
    string kolor;

protected:  
    // int x;
    // int y;

public: 
    // void setPunkt(int x, int y);
    // void wypisz(); - > została przesłonięta
    // int getX();
    // int getY();

    void setPunkt(int x, int y, string kolor)  // przesłanianie nazw
    {
        this->x =x;
        this->y = y;
        this->kolor = kolor;
    }

    void wypisz()  //przesłanianie nazw
    {
        // cout << " (" << x << ";" << y << ") " <<kolor;
        punkt::wypisz();
        cout<< kolor;
    }

    void setKolor(string kolor)
    {
        this->kolor = kolor;
    }
    string getKolor() { return kolor; }

    double getR()
    {
        // return sqrt(getX() * getX() + getY() * getY());
        return sqrt(x*x + y*y);
    }
};

int main()
{
    punkt p1;
    p1.setPunkt(10, 20);
    p1.wypisz();

    punkt_v2 p2;
    //p2.setPunkt(200, 300);
    p2.punkt::setPunkt(10,20);
    // p2.setKolor("czerwony");
    p2.wypisz();
    //cout << p2.getKolor();
    return 0;
}