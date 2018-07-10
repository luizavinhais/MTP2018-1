// Luiza Siqueira Vinhais Matricula 11721EBI020 //

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


struct dimensao

{

	float largura;

	float profundidade;

	float altura;

};

struct produto

{

	char nome[64];

	float preco;

	struct dimensao end;

};

void cadastro(struct produto v_produto[], int i){

	printf("\nDigite o nome:");

	fgets(v_produto[i].nome, 64, stdin);

	printf("\nDigite o preco:");

	scanf("%f", &v_produto[i].preco);

	getchar();

	printf("\nDigite a largura:");

	scanf("%f", &v_produto[i].end.largura);

	getchar();

	printf("\nDigite a profundidade:");

	scanf("%f", &v_produto[i].end.profundidade);

	getchar();

	printf("\nDigite a altura:");

	scanf("%f", &v_produto[i].end.altura);

	getchar();

}

void pesquisa(struct produto v_produto[], int i){

	char condicional[64];

	strcpy(condicional, " ");

	if(strcmp(condicional, v_produto[i].nome) == 0){

		printf("\nProduto nao cadastrado!");

	}

	else{

		printf("\n %s, R$ %.2f, largura: %.2fm x profundidade: %.2fm x altura: %.2fm",v_produto[i].nome, v_produto[i].preco, v_produto[i].end.largura, v_produto[i].end.profundidade, v_produto[i].end.altura);

	}

}

int main()

{

	struct produto v_produto[2];

	int menu, produto, num_produto = 0;

	strcpy(v_produto[0].nome, " ");

	strcpy(v_produto[1].nome, " ");

	do{

	printf("\n\nSeja bem vindo! Escolha uma das opcoes abaixo: \n 1 - Cadastro\n2 - Consulta\n ");

	scanf("%d", &menu);

	getchar();  

	switch(menu)

	{

		case 1: 

			printf("\nEscolha entre o produto 1 ou 2:");

			scanf("%d", &produto);

			getchar();

			switch(produto){

				case 1:

					num_produto = produto -1;

					cadastro(v_produto, num_produto);

					printf("\nProduto 1 cadastrado com sucesso");

					num_produto = 0;

					break;

				case 2:

					num_produto = produto -1;

					cadastro(v_produto, num_produto);

					printf("\nProduto 2 cadastrado com sucesso");

					num_produto = 0;

					break;

				default:

					break;

			}

			break;

		case 2:	

			printf("\nEscolha o produto 1 ou 2:");

			scanf("%d", &produto);

			getchar();

			switch(produto){

				case 1:

					num_produto = produto -1;

					pesquisa(v_produto, num_produto);

					num_produto = 0;

					break;

				case 2:

					num_produto = produto -1;

					pesquisa(v_produto, num_produto);

					num_produto = 0;

					break;

				default:

					break;

			}

			break;

	
		default: 

			break;

	}	

	}while(menu != 3);

	return 0;

}
