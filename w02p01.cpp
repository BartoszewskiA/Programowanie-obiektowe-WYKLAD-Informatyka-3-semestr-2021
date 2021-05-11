#include <iostream>

using namespace std;

class osoba
{
public:
    string imie;
    string nazwisko;
    int wiek;
};
int main()
{
    // obiekt statyczny
    // osoba ktos;
    // ktos.imie = "Aaaaaaa";
    // ktos.nazwisko = "Bbbbbbb";
    // ktos.wiek = 23;
    // cout<< ktos.nazwisko<<" "<<ktos.imie<<" "<<ktos.wiek<<" lat \n";

    // obiekt dynamiczny
    osoba *p = new osoba;
    p->imie = "aaaaa";
    p->nazwisko = "bbbbb";
    p->wiek = 23;
    cout << p->nazwisko << " " << p->imie << " " << p->wiek << " lat \n";
    delete p;
    return 0;
}