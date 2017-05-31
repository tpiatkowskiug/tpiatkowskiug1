#include <stdio.h>

int main () {
int a;
int b;
int c;
int wynik;
scanf("%d", &a);
printf("%d\n", a);
scanf ("%d", &b);
printf("%d\n", b);
scanf ("%d", &c);
printf("%d\n", c);
printf ("\nprogram liczy (a*b) - (b/c)\n");
wynik = (a*b) - (b/c);                    //dzielenie na liczbach calkowitych - dalej zly wynik - powinno byc: float wynik2 = (a*b) - ((float) b/c);
printf ("%d\n", wynik);
printf ("\nprogram liczy (a*b)-(b mod c')\n");
wynik = (a*b) - (b % c);
printf("%d\n" ,wynik);
printf ("\nprogram liczy (a*b) - (c*a) - (b*c)\n");
wynik = (a*b) - (c*a) - (b*c);
printf ("%d\n" ,wynik);


printf ("\nprogram podaje liczy od najmniejszej\n");
if ((a>b) && (c>a)) {                 //warunek niekompletny - nie wiadomo jaka jest relacja pomiedzy 'c' i 'b'
  printf ("%d, %d, %d\n" ,b,a,c);
} else if ((a>b) && (a>c) && (b>c)) {  //ok
  printf ("%d, %d, %d\n" ,c,b,a);
} else if ( (a>b) && (a>c) && (c>b)) { //ok
  printf("%d, %d, %d\n",b,c,a);
} else if ((b>a) && (c>b)) {           //ok
  printf ("%d, %d, %d\n" ,a,b,c);
} else if ( (b>a) && (b>c) && (c>a)) { //ok
  printf("%d, %d, %d\n",a,c,b);
} else if ( (b>a) && (b>c) && (a>c)) { //ok
  printf("%d, %d, %d\n",c,a,b);
}
return 0;
}

//Poprawiony wynik na 7 pkt.
