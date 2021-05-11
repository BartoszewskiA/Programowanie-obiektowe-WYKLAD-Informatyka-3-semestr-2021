#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    // settery
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    void setWiek(int w) { wiek = w; }
    // gettery
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek() { return wiek; }
};

int main()
{
    osoba *p = new osoba;
    string s;
    int w;

    cout << "imie: ";
    cin >> s;
    p->setImie(s);
    cout << "nazwisko: ";
    cin >> s;
    p->setNazwisko(s);
    cout << "wiek: ";
    cin >> w;
    p->setWiek(w);


    cout<<p->getNazwisko()<<" "<<p->getImie()<<" "<<p->getWiek()<<" lat\n";

    delete p;
    return 0;
}