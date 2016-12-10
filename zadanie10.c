#include <stdio.h>
int silnia(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * silnia (n-1); }
  }


int main () {
  int liczba;
  scanf ( "%d", &liczba);
  printf (" wynik= %d\n" , silnia(liczba));

return 0;
}
