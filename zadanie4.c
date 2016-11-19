#include <stdio.h>

int main () {
int x;
int sum=0;
int wantcontinue;
printf("Czy kontynuowac (1-tak/0-nie)? \n");
scanf ("%d", &wantcontinue);
while (wantcontinue == 1){
  printf("podaj liczbe: \n");
  scanf("%d", &x);
  sum += x*x;
printf("Czy kontynuowac (1-tak/0-nie)? \n");
scanf ("%d", &wantcontinue);

}
printf("%d\n", sum);
return 0;
}
