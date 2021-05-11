#include <iostream>

using namespace std;

class liczba;
class liczba_rzeczywista;

class liczba
{
private:
    int dana;

public:
    liczba(int x = 0) : dana(x) {}
    int getDana() { return dana; }
    void setDana(int dana) { this->dana = dana; }

    friend void wypisz (liczba x);
    friend bool porownaj(liczba x, liczba_rzeczywista y);
};

class liczba_rzeczywista
{
private:
    double dana;

public:
    liczba_rzeczywista (double x = 0) : dana(x) {}
    int getDana() { return dana; }
    void setDana(double dana) { this->dana = dana; }

    friend void wypisz (liczba x);
    friend bool porownaj(liczba x, liczba_rzeczywista y);
};

void wypisz (liczba x)
{
    cout<<"przekazana liczba: "<<x.dana;
}

bool porownaj(liczba x, liczba_rzeczywista y)

{
    if (x.dana==y.dana)
        return true;
    else
        return false;
}

int main()
{
    liczba l1(100);
    wypisz(l1);
    
    return 0;
}