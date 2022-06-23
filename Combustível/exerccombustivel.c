#include <stdio.h>

int main ()
{
	
	float valorAlcool;
	float valorGasolina;
	float combustivel;
	
	printf("             |Combustivel|\n");
	printf("\n");
	
	printf ("\tDigite o valor do alcool:\n");
	scanf("%f:", &valorAlcool);
	
	printf("\n");
	
	printf ("\tDigite o valor da gasolina:\n");
	scanf("%f:", &valorGasolina);
	
	printf("\n");
	
	combustivel = (valorAlcool / valorGasolina);
	printf ("\tCombustivel %.2f\n", combustivel );
	
	printf("\n");
	
	printf("------------------------------------------------\n");
	if (combustivel < 0.7){
		printf ("\tCompensa abastecer com alcool\n");
	} else {
		printf ("\tCompensa abastecer com gasolina\n");
	}
	printf("------------------------------------------------\n");
	
	
	return 0;
}

