// Luiza Siqueira Vinhais	MATRICULA 11721EBI020//

#include <stdio.h>
#include <stdlib.h>

void ger_numeros(float * vet, int tamanho) {

	int i;  

	for(i = 0; i < tamanho; i++) 

		vet[i] = (float) rand()/(float) RAND_MAX + 0.5f;}

float soma_vet(float v[], int n){

	 if (n == 0) return 0;

   else {

      float s;

      s = soma_vet (v, n-1);

      if (v[n-1] > 0) s += v[n-1];

      return (s);}}

float produto(float v[], int n){

	float mult = 1.0f;

	for(int i=0; i<n; i++)

		mult = mult*v[i];

	return mult;

}



int main(){

	srand(123456);


	int menu, n=100;

	float num[100];

	ger_numeros(num, n);

	do{

	printf("\n Escolha uma das opcoes: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do programa.");

	printf("\nDigite a opcao: ");

	scanf("%d", &menu);	

	getchar();

	switch(menu){

		case 1:

			printf("\nSomatorio: %f", soma_vet(num, n));

			break;

		case 2:

			printf("\nProduto: %f", produto(num,n));

			break;

		case 3:

			return 0;

		default:

			break;

	}}while(menu != 4);

	return 0;}
