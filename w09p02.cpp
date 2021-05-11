#include <iostream>

using namespace std;

class osoba
{
private:
    string *imie;

public:
    osoba(string im = "")
    {
        imie = new string;
        *imie = im;
    }
    osoba (const osoba & wzorzec)
    {
        imie = new string;
        *imie = *wzorzec.imie;
        //wzorzec.imie = NULL ;
    }
    ~osoba()
    {
        delete imie;
    }

    string getImie() { return *imie; }
    void setImie(string im)
    {
        *imie = im;
    }
};

int main()
{
    osoba ktos01("Kowalski");
    osoba  ktos02 = ktos01;
    //osoba ktos03(ktos01);
    //ktos01.setImie("Nowak");

    cout << ktos01.getImie();
    cout << endl;
    cout << ktos02.getImie();
    return 0;
}