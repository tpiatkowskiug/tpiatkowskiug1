#include <stdio.h>

int main () {
int tab [7];
int max=-99999;
int min=99999;
int suma=0;
int ilosc=0;
double srednia;
for (int i = 0; i < 7; i=i+1) {
  scanf("%d", &tab[i]);
}

  //liczba największa
  for (int i = 0; i < 7; i=i+1) {
  if (tab[i]>max){max=tab[i];
}
}
printf("max = %d\n", max );
  //liczby najmnijesza
  for (int i = 0; i < 7; i=i+1) {
  if (tab[i]<min) {min=tab[i];
}
}
printf("min = %d\n",min );
  //średnia arytmetyczna elemetów tablicy
  for (int i = 0; i < 7; i=i+1){
  suma = suma + tab [i];
  srednia = (double) suma/ i;
}
  printf ("suma: %d\nsrednia: %f\n" ,suma, srednia);
 //ilości liczb większej od stu
 printf ("\nilości liczb większej od stu\n");
  for (int i = 0; i < 7; i=i+1) {
  ilosc = ilosc + (tab[i] > 100);


}
printf ("ilosc = %d\n", ilosc);
return 0;
}
