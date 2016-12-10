#include <stdio.h>
int suma(int liczba) {
  if (liczba == 1) {
    return liczba;
  } else {
    return liczba + suma (liczba-1); }
  }


int main () {
  int liczba;
  scanf ( "%d", &liczba);
  printf (" wynik= %d\n" , suma(liczba));

return 0;
}
