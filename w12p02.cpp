#include <iostream>

using namespace std;

class osoba //klasa absrtakcyjna
{
protected:
    string imie;
    string nazwisko;
    string uczelnia;

public:
    osoba(string Imie = "", string Nazwisko = "", string Uczelnia = "UTH Rad.")
        : imie(Imie), nazwisko(Nazwisko), uczelnia(Uczelnia) {}
    void virtual wczytajDane() = 0; //metody czysto wirtualne
    void virtual wypiszDane() = 0;
};

//-----------------------------------------------------------------------------------------------------------------

class student : public osoba
{
protected:
    string kierunek;

public:
    student(string Imie = "", string Nazwisko = "", string Kierunek = "Informatkia", string Uczelnia = "UTH Rad.")
        : osoba(Imie, Nazwisko, Uczelnia), kierunek(Kierunek) {}
    void wczytajDane();
    void wypiszDane();
};

void student::wczytajDane()
{
    cout << "Imie: ";
    cin >> imie;
    cout << "Nazwisko: ";
    cin >> nazwisko;
    cout << "Kierunek: ";
    cin >> kierunek;
    cout << "Uczelnia: ";
    cin >> uczelnia;
}

void student::wypiszDane()
{
    cout<< "Imie i nazwisko: " << imie<<" "<< nazwisko << endl
        << "Kierunek: "<<kierunek<<" "<<uczelnia<<endl;
}

// -----------------------------------------------------------------------------------------------

class wykladowca : public osoba
{
protected:
    string katedra;

public:
    wykladowca(string Imie = "", string Nazwisko = "", string Katedra = "Katedra Informatyki", string Uczelnia = "UTH Rad.")
        : osoba(Imie, Nazwisko, Uczelnia), katedra(Katedra) {}
    void wczytajDane();
    void wypiszDane();
};

void wykladowca::wczytajDane()
{
    cout << "Imie: ";
    cin >> imie;
    cout << "Nazwisko: ";
    cin >> nazwisko;
    cout << "Katedra: ";
    cin >> katedra;
    cout << "Uczelnia: ";
    cin >> uczelnia;
}

void wykladowca::wypiszDane()
{
    cout<< "Imie i nazwisko: " << imie<<" "<< nazwisko << endl
        <<katedra<<" "<<uczelnia<<endl;
}

int main()
{
    // osoba *ktos = new osoba(); - nie można utworzyć instancji klasy abstrakcyjnej
    // student *ktos = new student("Jan", "Kowalski", "Medycyna");
    // ktos->wypiszDane();
    // wykladowca *ktos2 = new wykladowca("Artur", "Bartoszewski");
    // ktos2->wypiszDane();

    osoba *tab[] = {
        new wykladowca("Artur", "Bartoszewski"),
        new student("Jan", "Kowalski"),
        new student("Anna", "Nowak")
    };

    for (int i=0; i<3; i++)
        tab[i]->wypiszDane();

    return 0;
}