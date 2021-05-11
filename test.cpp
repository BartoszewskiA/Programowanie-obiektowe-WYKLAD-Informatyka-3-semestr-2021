class liczba {
  int x;
public:
  liczba(int y): x(y) {}
  
  // preinkrementacja - najpierw  zwiększamy, a potem zwracamy wartość
  liczba & operator++() { 
    ++x;
    return *this;
  }

  // postinkrementacja - najpierw zwracamy wartość, a potem zwiększamy
  liczba operator++(int) {  // specjalny zapis do postinkrementacji
    liczba kopia = (*this);
    ++x;  // zwiększa liczbę przechowywaną w orginale (kopia zostaje bez zmian)
    return kopia; // zwracamy kopię, a nie oryginał
  }
};