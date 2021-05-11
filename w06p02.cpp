#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    int ID; // bedzie nadawane autoamtycznie

public:
    static int ile;
    osoba(string im):imie(im) 
    {
        ile++;
        ID = ile;
    }
    string getImie() { return imie;}
    int getID() {return ID;}
    static int getIle() {return ile;}
    void setImie(string imie) {this->imie = imie;}
};

int osoba::ile = 0;

int main()
{
    osoba pracownik1("Kowalski");
    // cout<<pracownik1.ile<<endl;
    cout<< osoba::getIle()<<" Id="<<pracownik1.getID()<<endl;

    osoba pracownik2("Kowalski");
    // cout<<pracownik2.ile<<endl;
    cout<< osoba::ile<<" Id="<<pracownik2.getID()<<endl;

    osoba pracownik3("Kowalski");
    // cout<<pracownik3.ile<<endl;
    cout<< osoba::ile<<" Id="<<pracownik3.getID()<<endl;

    cout<< osoba::ile<<" Id="<<pracownik1.getID()<<endl;
    return 0;
}