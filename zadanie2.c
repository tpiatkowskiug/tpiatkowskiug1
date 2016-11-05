#include <stdio.h>

int main () {
int counter;

scanf ("%d", &counter);
printf("%d\n", counter);

if (counter%2 ==0 && counter%3 ==0 && counter%5 ==0) {
  printf ("Dzieli się przez 2,3 i 5");
} else if (counter%2 ==0 && counter%3 ==0) {
printf("Dzieli się przez 2,3");
} else if (counter%2 ==0 && counter%5 ==0) {
printf("Dzieli się przez 2, 5");
} else if (counter%3 ==0 && counter%5 ==0) {
printf("Dzieli się przez 3, 5");
} else if (counter%2 ==0) {
printf("Dzieli się przez2");
} else if (counter%3 ==0) {
printf("Dzieli się przez3");
} else if (counter%5 ==0) {
printf("Dzieli się przez5");
} else {
printf("Nie dzieli się przez 2, 3, 5");
}
return 0;
}
