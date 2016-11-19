#include <stdio.h>

int main () {
int a;
int silnia=1;
printf("podaj liczbe: \n");
scanf("%d", &a);
for (int i=a; i>1; i--) {

  silnia *=i;
}
printf("%d\n", silnia);

return 0;
}
