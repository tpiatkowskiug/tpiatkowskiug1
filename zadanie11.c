#include <stdio.h>
#include <stdlib.h>

int main () {
int x, *a, *b, *c, d=10;
printf("podaj liczbe: \n");
scanf("%d", &x);
a=&x;  b=&x; c=&x;
printf ("a=%d b=%d c=%d x=%d\n",*a ,*b, *c, x);
b=&d;
printf ("a=%d b=%d c=%d x=%d \n",*a ,*b, *c, x);
c=&d;
printf ("a=%d b=%d c=%d x=%d\n",*a ,*b, *c, x);

d=x;
printf ("a=%d b=%d c=%d x=%d\n",*a ,*b, *c, x);
/* int main () {
int a = 10, *temp, sum=0;
temp=&a; *temp=20; temp=&sum; *temp = a;
printf ("a = %d *temp = %d sum=%d\n",a ,*temp, sum);

/* int liczba, *tablica;
scanf ("%d", &liczba);
tablica = (int *) malloc (liczba * sizeof (tablica));

for (int i = 0; i < liczba; i++) {
scanf("%d", &tablica[i]);
}
printf ("\n wynik: \n");
for (int i =0; i< liczba; i++){
  printf ("%d,\n", tablica[i]);
}
free(tablica);*/
return 0;
}
