// Luiza Siqueira Vinhais
// Matricula 11721EBI020
#include <stdio.h>

int main()

{
    char tex[256], *pc;
	int menu, i, cont, vet_num[64], *ps, num;

	do{

	printf("Seja bem vindo! \n1  Codificar a mensagem\n2 -Decodificar a mensagem\n3 -Sair\n Escolha uma opcao: ");

	scanf("%d", &menu);

	getchar();

	switch(menu)

	{

		case 1: 

			for(i=0; i<256; i++)

				tex[i] = '\0';

			printf("\nDigite a mensagem: ");

			fgets(tex, 256, stdin);

			for(cont=0; tex[cont] != '\0'; cont++);

			ps = (int*)tex;

			printf("\nMensagem codificada:");

			for(i=0; i<cont; i++){

				if(*(ps+i) != 0)

					printf("%i ", *(ps+i));

			}

			break;

		case 2:	

			printf("\nObs: Digite 0 ao final da sequencia.");

			pc = (char*)vet_num;

			i=0; 

			printf("\nDigite a sequencia numerica:");

			do{

				scanf("%d", &num);

				getchar();

				vet_num[i] = num;

				i++;

			}while(num != 0);

			pc = (char*)&vet_num;

			printf("\nFrase decodificada:");

			for(i=0; i<sizeof(vet_num) && *(pc+i)!=0; i++)

				printf("%c", *(pc+i));	

			break;

		case 3:

			return 0;

		default: 

			break;

	}	

	}while(menu != 4);

	return 0;

}