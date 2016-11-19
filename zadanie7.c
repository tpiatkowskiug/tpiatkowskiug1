#include <stdio.h>

int main () {
int a;
int b;
int suma=0;
printf("podaj liczbe: \n");
scanf("%d", &a);
scanf("%d", &b);
for (int i=a; i<=b; i++) {
printf ("%d \n" ,i);
suma = suma + i;
}
printf("%d\n", suma);

return 0;
}
