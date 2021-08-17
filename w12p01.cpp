
#include <iostream>

using namespace std;

class Bazowa
{
public:
    int a;
    void virtual przedstwa_sie()=0;
};

class Pochodna : public Bazowa
{
public:
    int b;
    void przedstwa_sie() {cout<<"Pochodna \n";}
};

int main()
{
    // Bazowa *bazowa = new Bazowa;
    // bazowa->a = 10;
    Pochodna *pochodna = new Pochodna;
    Bazowa *bazowa_02 = new Pochodna;
    // pochodna->a=100;
    // pochodna->b= 200;
    // bazowa_02->a = 300;
    // bazowa_02->b = 300;
    // bazowa->przedstwa_sie();
    bazowa_02->przedstwa_sie();
    // bazowa->przedstwa_sie();
    return 0;
}