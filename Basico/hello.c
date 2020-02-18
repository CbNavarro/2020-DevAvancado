// importe de input e output
#include <stdio.h>

#include "teste.h"
// *p

//   p = ponteiro
//  &p = endereço de p na memoria
//  *p = conteudo do endereço de memoria

int main ()
{
	int a,b, *c, g;
// =========== Ponteiro ========== 
// se *c então o valor é atribuido no endereço, caso c entao o valor se torna o endereço da memoria
	c = &a;
	a = 5;
	b = 50;
	// a = c2f(50);

	char vet[10];

// Coloca-se & para que o scan guarde o valor digitado na memoria, caso sem, ele pega o valor e defini como endereço de memoria
 	scanf("%i", &g);

	// printf("Ponteiro:  %i %i %p %p %p\n", a, b, &g, &vet[0], &vet[1]);
	// printf("%p %p\n", &vet, &vet+1);
	printf("%p \n", &g);
	
	return 0;
}
