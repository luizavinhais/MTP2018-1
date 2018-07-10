
// Luiza Siqueira Vinhais MATRICULA 11721EBI020//



#include <stdio.h>

float media(int soma, float cont){

	float resultado;

	resultado = soma/cont;

	return resultado;

}

int soma_vet(int vet[20], int n) {

   if (n == 0) return 0;

   else {

      int x;

      x = soma_vet (vet, n-1);

      if (vet[n-1] > 0) x += vet[n-1];

      return (x);}}

int main(){

	int i, num[20], soma, tam;

	float cont ;

	for(i=0; i<20; i++){

		num[i] = 0;}

	printf("\n Seja bem vindo!\n Digite o numero de termos: ");

	scanf("%d", &tam);

	for(i=0; i<tam; i++){

		printf("\nDigite o %d numero: ", i+1);

		scanf("%d", &num[i]);

		getchar();

		if(num[i] != 0) cont++;}

	soma = (soma_vet(num, tam));

	printf("\nMedia - %f", media(soma, cont));

	return 0;
    
}