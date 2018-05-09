// Luiza Siqueira Vinhais 
// MATRICULA 11721EBI020 
#include <stdio.h>

int main()

{

	char frase[256];
	int i, num = 0;

	printf("Seja bem vindo! Digite a frase: ");

	scanf("%s", frase);

	getchar();

	for(i=0; frase[i] != '\0'; i++){

		if(frase[i] == '0')

		{	num = 0 + num*10;}

		if(frase[i] == '1')

		{	num = 1 + num*10;}

		if(frase[i] == '2')

		{	num = 2 + num*10;}

		if(frase[i] == '3')

		{ num = 3 + num*10;}

		if(frase[i] == '4')

		{	num = 4 + num*10;}

		if(frase[i] == '5')

		{  num = 5 + num*10;}

		if(frase[i] == '6')

		{  num = 6 + num*10;}

		if(frase[i] == '7')

		{	num = 7 + num*10;}

		if(frase[i] == '8')

		{	num = 8 + num*10;}

		if(frase[i] == '9')

		{	num = 9 + num*10;}

	}

	printf("%d", num);

	return 0;

}