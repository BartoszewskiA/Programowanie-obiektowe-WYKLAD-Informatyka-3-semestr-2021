#include <iostream>

using namespace std;

class wektor
{
protected:
    int X;
    int Y;

public:
    wektor(int x = 0, int y = 0) : X(x), Y(y) {}
    int getX() { return X; }
    int getY() { return Y; }
    void setX (int x) {X=x;}
    void setY (int y) {Y=y;}
    friend wektor operator- (wektor w1, wektor w2);
    friend wektor operator* (wektor w, int s);
    friend wektor operator* (int s, wektor w);

};

wektor operator+ (wektor w1, wektor w2)
{
    wektor wynik;
    wynik.setX(w1.getX() + w2.getX());
    wynik.setY(w1.getY() + w2.getY());
    return wynik;
}

wektor operator- (wektor w1, wektor w2)
{
    wektor wynik(w1.X - w2.X , w1.Y - w2.Y);
    return wynik;
}

wektor operator* (wektor w, int s)
{
    wektor wynik(w.X * s , w.Y * s);
    return wynik;
}

wektor operator* (int s, wektor w)
{
    // wektor wynik(w.getX() * s, w.getY() * s); // zaprzyjaźnienie z klasą nie jest potrzebne
    wektor wynik(w.X * s , w.Y * s);
    return wynik;
}

int main()
{
    wektor w1(10,40), w2(10,10);

    wektor wynik = 3 * w1;
    wektor wynik = w1 * 5;

    wektor wynik = w2 + w1;

    cout<<wynik.getX()<<" "<<wynik.getY();
    return 0;
}