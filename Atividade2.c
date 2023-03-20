#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main() {
	selocale(LC_ALL, "Portuguese");
	int f, b, i, n, aux;
	f=0;
	b=1;  
	
	printf("Digite um número: ");
	scanf("%d", &n);
	printf("\nSérie de FIbonacci: \n\n %d\n",b);
	for(i=2; i<=n; i++){
		aux = f + b;
		f = b;
		b = aux;
		
		printf("%d\n", aux); 
	}
}
