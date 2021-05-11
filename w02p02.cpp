#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    void wczytaj_dane()
    {
        cout<<endl<<"Imie: ";
        cin>>imie;
        cout<<endl<<"Nazwisko: ";
        cin>>nazwisko;
        cout<<endl<<"Wiek: ";
        cin>>wiek;
    }

    void przedstaw_sie()
    {
        cout << nazwisko << " " << imie << " " << wiek << " lat \n";
    }
};

int main()
{
    osoba *p = new osoba;
    p->wczytaj_dane();
    p->przedstaw_sie();
    delete p;
    return 0;
}