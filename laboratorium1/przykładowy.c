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
if ((a>b) && (c>a) && (c>b)) {
  printf ("%d, %d, %d\n " ,c,a,b);
} else if ((a>b) && (a>c) && (b>c)) {
  printf ("%d, %d, %d\n" ,a,b,c);
} else if ((a>b) && (a>c) && (c>b)) {
  printf ("%d, %d, %d\n" ,a,c,b);
} else if ( (b>a) && (c>b) && (c>a)) {
  printf("%d, %d, %d\n",c,b,a);
} else if ((b>a) && (b>c) && (c>a)) {
  printf ("%d, %d, %d\n" ,b,c,a);
} else if ( (b>a) && (b>c) && (a>c)) {
  printf("%d, %d, %d\n",b,a,c);
}
else {

}
}
return 0;
