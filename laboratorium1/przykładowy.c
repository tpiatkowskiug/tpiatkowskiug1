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
int a,b,c;
if ((a>b) && (b>c) && (a>c)) {
  printf ("%d, %d, %d\n " ,c,b,a);
} else if ((b>c) && (b>a) && (a>c)) {
  printf ("%d, %d, %d\n" ,c,a,b);
} else if ((c>b) && (c>a) && (b>a)) {
  printf ("%d, %d, %d\n" ,a,b,c);
} else if ( (c>a) && (c>b) && (b>a)) {
  printf("%d, %d, %d\n",c,a,b);
}
else {

}
}
return 0;
