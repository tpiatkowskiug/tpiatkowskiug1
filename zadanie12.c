#include <stdio.h>

int main () {
int x;
int y;
int tab [3][4];
for (int x=0; x < 3; x=x+1 ) {
for (int y=0; y < 4; y=y+1){
tab [x][y]=(x+1)*(y+1);
printf ("%d ", tab [x][y]); //wypisac x*y do komórki [x][y]
}
printf ("\n");
}
return 0;
}
