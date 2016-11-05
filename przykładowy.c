#include <stdio.h>

int main () {
float a;
float b;
float c;
scanf("%f", &a);
printf("%f\n", a);
scanf ("%f", &b);
printf("%f\n", b);
scanf ("%f", &c);
printf("%f\n", c);
float wynik = (a*b) - (c*a) - (b*c);
printf ("%f\n", wynik);
return 0;
}
