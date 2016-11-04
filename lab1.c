#include <stdio.h>

int main () {
float a;
float b;
float c;
printf ("\nprogram podaje liczy od najmniejszej\n");
scanf ("%f", &a);
scanf ("%f", &b);
scanf ("%f", &c);
if ((a>b) && (c>a) && (c>b)) {
  printf ("%f, %f, %f\n" ,b,a,c);
} else if ((a>b) && (a>c) && (b>c)) {
  printf ("%f, %f, %f\n" ,c,b,a);
} else if ( (a>b) && (a>c) && (c>b)) {
  printf("%f, %f, %f\n",b,c,a);
} else if ((b>a) && (c>b) && (c>a)) {
  printf ("%f, %f, %f\n" ,a,b,c);
} else if ( (b>a) && (b>c) && (c>a)) {
  printf("%f, %f, %f\n",a,c,b);
} else if ( (b>a) && (b>c) && (a>c)) {
  printf("%f, %f, %f\n",c,a,b);
}

return 0;
}
