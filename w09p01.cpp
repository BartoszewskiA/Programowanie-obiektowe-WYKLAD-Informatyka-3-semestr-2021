#include <iostream>
#include <sstream>

using namespace std;

class dana
{
private:
    int x;
    int Id;
    string podpis_konstruktora;

public:
    static int ile;
    dana()
    {
        x = 0;
        Id = ++ile;
        podpis_konstruktora = "konstruktor domyslny";
        cout<<"log: Id="<<Id<<" "<<podpis_konstruktora<<endl;
    }
    dana(int X) : x(X)
    {
        Id = ++ile;
        podpis_konstruktora = "konstruktor z parametrami";
        cout<<"log: Id="<<Id<<" "<<podpis_konstruktora<<endl;
    }
    dana(dana &obj) // konstruktor kopiujacy
    {
        x = obj.x;
        //Id = ++ile;
        Id = obj.Id;

        podpis_konstruktora = "konstruktor kopiujacy";
        cout<<"log: Id="<<Id<<" "<<podpis_konstruktora<<endl;
    }

    string toString()
    {
        stringstream temp;
        temp <<"ID: "<<Id<<" x="<<x<<" utworzony przez "<<podpis_konstruktora;
        return temp.str();
    }
};

int dana::ile = 0;

int main()
{
    dana p1(20); // p2;

    // p2 = p1; - prosta kopia istniejącego obiektu

    // p2 = dana(p1);  // jawne wywołanie konstruktora kopiującego

    // dana p2(p1);  // uzycie obiektu p1 jako wzorca ptrzy tworzeniu p2

    dana p2;
    p2 = p1;

    cout<<p1.toString()
        <<endl
        <<p2.toString();

    return 0;
}