#include <stdio.h>
int wczytajliczbe_a() {
  int a;
  printf("Podaj liczbe a");
  scanf ("%d",  &a);
  return a;
}
int wczytajliczbe_b() {
  int b;
  printf("Podaj liczbe b");
  scanf ("%d",  &b);
  return b;
}
int podajoperacje() {
  int dzialanie;
  printf("Operacje:\n1 Dodawanie (+)\n 2 Odejmowanie(-) \n 3 Mnozenie(*) \n 4 Dzielenie(/) \n");
  printf("wybirz numer operacji" );
  scanf ("%d",&dzialanie);
  return dzialanie;
}
int policz(int dzialanie, int a, int b) {

  int wynik;
  printf ("\nprogram liczy (a+b)\n");
  wynik = (a+b);
  printf ("%d\n", wynik);
  printf ("\nprogram liczy (a-b)\n");
  wynik = (a-b);
  printf ("%d\n", wynik);
  printf ("\nprogram liczy (a*b)\n");
  wynik = (a*b);
  printf ("%d\n", wynik);
  printf ("\nprogram liczy (a/b)\n");
  wynik = (a/b);
  printf ("%f\n", (float) wynik);
return wynik;
}

int main () {
  int a = wczytajliczbe_a();
  int b = wczytajliczbe_b();
  int dzialanie = podajoperacje();
  int wynik = policz(dzialanie, a, b);


return 0;
}
