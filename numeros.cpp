#include <iostream>
#include <stdio.h>
using namespace std;
//grupo 1 factores de un numero

//grupo 2 fibonacci de un numero
int fibonacci(int);
//grupp 3 los n primeros numeros primos

//grupo 4  los n numeros abundantes

//grupo 5  los n numeros deficientes

//grupo 6 validar n que sea mayor que 10 y menores que 20

main(){
    int n;
    printf("Numero Fibonacci:");scanf("%d",&n);printf("Numero= %d",fibonacci(n));
}

int fibonacci(int j)
{
int y;
if(j>1)
{y=fibonacci(j-1)+fibonacci(j-2);return(y);}
else{
  if(j==1){return (1);}
  if(j==0){return (0);}
}
}
