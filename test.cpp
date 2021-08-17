#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <time.h>
#include <ctime>
using namespace std;
class zwierze;
class zwierze
{
private:
    int Wiek,Waga;
    string Gatunek,Imie;
public:
    zwirze(){Gatunek="";Imie="";Wiek=NULL;Waga=NULL;}
    zwierze(string gatunek="",string imie="",int wiek=0,int waga=0) :Gatunek(gatunek),Imie(imie),Wiek(wiek),Waga(waga){}
    string Wypisz()
        {
        string s = " Gatunek: ";
        s += Gatunek;
        s+= " Imie: ";
        s += Imie;
        s+= " Wiek: ";
        s += to_string(Wiek);
        s+= " Waga: ";
        s += to_string(Waga);
        return s;
        }

    void SetGatunek(string gatunek)
        {
            if(gatunek=="kot"||gatunek=="pies"||gatunek=="chomik"||gatunek=="inne")
        Gatunek=gatunek;
        else
        {
            srand (time(NULL));
            cout<<"Gatunek zapisac mozna wylacznie jako wartosci: kot pies chomik inne "<<endl;
            cout<<"podanie wartosci roznej od powyzszych skutkuje losowym wybraniem wartosci gatunek"<<endl;
            int r=rand() % 4 + 1;
            if(r==1)
                Gatunek="kot";
            if(r==2)
                Gatunek="pies";
                if(r==3)
                Gatunek="chomik";
                if(r==4)
                Gatunek="inne";
        }
        }
    void SetImie(string imie)
        {
        Imie=imie;
        }
    void SetWiek(int wiek)
        {
            if(wiek >= 0)
        Wiek=wiek;
        else
            cout<<"niepoprawny wiek (mniejszy od 0)"<<endl;
        }
    void SetWaga(int waga)
        {
            if(waga>0)
        Waga=waga;
        else
            cout<<"niepoprawna waga (mniejsza od 0)"<<endl;
        }
        string GetGatunek()
        {
            return Gatunek;
        }
                string GetImie()
        {
            return Imie;
        }
                int GetWiek()
        {
            return Wiek;
        }
                int GetWaga()
        {
            return Waga;
        }



~zwierze(){cout<<"usunieto obiekt"<<endl;}
};





int main()
{
 zwierze T[4];
T[0].SetGatunek("kot");
  T[0].SetImie("plot");
   T[0].SetWaga(2);
    T[0].SetWiek(1);
T[1].SetGatunek("pies");
  T[1].SetImie("tes");
   T[1].SetWaga(4);
    T[1].SetWiek(11);
T[2].SetGatunek("chomik");
  T[2].SetImie("teb");
   T[2].SetWaga(1);
    T[2].SetWiek(3);
T[3].SetGatunek("krowa");
  T[3].SetImie("slowa");
   T[3].SetWaga(121);
    T[3].SetWiek(12);
T[4].SetGatunek("inne");
  T[4].SetImie("ala");
   T[4].SetWaga(23);
    T[4].SetWiek(3);
//cout<<T[3].Wypisz()<<endl;
    return 0;
}
