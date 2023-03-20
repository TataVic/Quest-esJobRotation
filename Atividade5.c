#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main() {
	int i; 
	char vetz[5] = {'a', 'b', 'c', 'd', 'e'}; 
	
	for(i = 0; i < 5; i++){
		printf("O valor do elemento %d dos caracteres = %c\n", i, vetz[i]);
	}
	getch();
}
