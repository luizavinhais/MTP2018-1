//
Luiza Siqueira Vinhais 
MatriculA 11721EBI020//

#include <stdio.h>

int main()

{

	int menu, i=0, j, c=0, x=1,y, dec=0, d_num, v_num[256], n_conv=0;

	int n_convertido[100];

	char num[256],inum[256], n_bin[100]; 

	do{
    printf ("Seja bem vindo! Escolha uma das opcoes abaixo:\n");

	printf("\n1-Binario para Decimal.\n2-Binario para Hexadecimal.\n3-Hexadecimal para Decimal.");

	printf("\n4-Hexadecimal para Binario.\n5-Decimal para Binario.\n6-Decimal para Hexadecimal.\n7-Octal para Decimal.\n8-Decimal para Octal.");

	printf("\n\nDigite: ");

	scanf("%d", &menu); 

	getchar();

	switch(menu)

	{

		case 1:

			printf("\nDigite o numero binario: ");

			scanf("%s", &num);

			getchar();

			while(num[i] != '\0'){

				i++;

				c++;

			}

			j = c -1;

			for(i=0; i<c; i++, j--){

				inum[j] = num[i];

			}

			for(j=1; j<c;j++){

				x=x*2;

				if(inum[j] == '1')

					dec = dec + x;

			}

			if(inum[0] == '1')

				dec = dec +1;

			printf("\nNumero decimal: %d ", dec);

			return 0;

		case 2:

			printf("\nDigite o numero binario: ");

			scanf("%s", &n_bin);

			getchar();

			for(i = 0; n_bin[i] != '\0'; i++);

				i--;

			for(y = i; y >= 0; y--){

				if(n_bin[y] == '0') n_convertido[y] = 0;

				else if(n_bin[y] == '1') n_convertido[y] = 1;

			}

			j = i;

			while(j >= 0){

				while(x <= i-j){

					n_convertido[j] *= 2;

					x++;

				}

				n_conv += n_convertido[j];

				x = 1;

				j--;

			}

			printf("\nNumero convertido: %x", n_conv);

			return 0;

		case 3:

			printf("\nDigite o numero hexadecimal: ");

			scanf("%s", &num);

			getchar();

			while(num[i] != '\0'){

					i++;

					c++;

			}

			j = c -1;

			for(i=0; i<c; i++, j--){

				inum[j] = num[i];

			}

			for(j=1; j<c;j++){

				x=x*16;

				if(inum[j] == '1')

					dec = dec + x;

				if(inum[j] == '2')

					dec = dec + 2*x;

				if(inum[j] == '3')

					dec = dec + 3*x;

				if(inum[j] == '4')

					dec = dec + 4*x;

				if(inum[j] == '5')

					dec = dec + 5*x;

				if(inum[j] == '6')

					dec = dec + 6*x;

				if(inum[j] == '7')

					dec = dec + 7*x;

				if(inum[j] == '8')

					dec = dec + 8*x;

				if(inum[j] == '9')

					dec = dec + 9*x;

				if(inum[j] == 'A')

					dec = dec + 10*x;

				if(inum[j] == 'B')

					dec = dec + 11*x;

				if(inum[j] == 'C')

					dec = dec + 12*x;

				if(inum[j] == 'D')

					dec = dec + 13*x;

				if(inum[j] == 'E')

					dec = dec + 14*x;

				if(inum[j] == 'F')

					dec = dec + 15*x;

			}

			if(inum[0] == '1')

				dec = dec +1;

			if(inum[0] == '2')

				dec = dec + 2;

			if(inum[0] == '3')

				dec = dec + 3;

			if(inum[0] == '4')

				dec = dec + 4;

			if(inum[0] == '5')

				dec = dec + 5;

			if(inum[0] == '6')

				dec = dec + 6;

			if(inum[0] == '7')

				dec = dec + 7;

			if(inum[0] == '8')

				dec = dec + 8;

			if(inum[0] == '9')

				dec = dec + 9;

			if(inum[0] == 'A')

				dec = dec + 10;

			if(inum[0] == 'B')

				dec = dec + 11;

			if(inum[0] == 'C')

				dec = dec + 12;

			if(inum[0] == 'D')

				dec = dec + 13;

			if(inum[0] == 'E')

				dec = dec + 14;

			if(inum[0] == 'F')

				dec = dec + 15;

			printf("\nNumero decimal: %d ", dec);

			return 0;

		case 4:

			printf("\nDigite o numero hexadecimal: ");

			scanf("%x", &n_conv);

			getchar();

			for(i = 0; n_conv >= 1; i++){ 

				n_convertido[i] = n_conv % 2;

				n_conv /= 2;

			}

			printf("\nNumero convertido: ");

			for(i -= 1; i >= 0; i--){

				printf("%i", n_convertido[i]);

			}

			return 0;

		case 5:

			printf("\nDigite o numero decimal: ");

			scanf("%d", &d_num);

			getchar();

			while(d_num > 0){

				v_num[i] = d_num % 2;

				i++;

				d_num = d_num / 2;

			}

			printf("\nNumero binario: ");

			for(j = i - 1; j >= 0; j--)

				printf("%d", v_num[j]);

			return 0;

		case 6:

			printf("\nDigite o numero decimal: ");

			scanf("%d", &d_num);

			getchar();

			while(d_num > 0){

				v_num[i] = d_num % 16;

				i++;

				d_num = d_num / 16;

			}

			printf("\n");

			for(j = i - 1; j >= 0; j--){

				if(v_num[j] >= 0 && v_num[j] <= 9 )

					printf("%d", v_num[j]);

				if(v_num[j] == 10)

					printf("A");

				if(v_num[j] == 11)

					printf("B");

				if(v_num[j] == 12)

					printf("C");

				if(v_num[j] == 13)

					printf("D");

				if(v_num[j] == 14)

					printf("E");

				if(v_num[j] == 15)

					printf("F");

				}

				return 0;		

		case 7:

			printf("\nDigite o numero octal: ");

			scanf("%s", &num);

			getchar();

			while(num[i] != '\0'){

				i++;

				c++;

			}

			j = c -1;

			for(i=0; i<c; i++, j--){

				inum[j] = num[i];

			}

			for(j=1; j<c;j++){

				x=x*8;

				if(inum[j] == '1')

					dec = dec + x;

				if(inum[j] == '2')

					dec = dec + 2*x;

				if(inum[j] == '3')

					dec = dec + 3*x;

				if(inum[j] == '4')

					dec = dec + 4*x;

				if(inum[j] == '5')

					dec = dec + 5*x;

				if(inum[j] == '6')

					dec = dec + 6*x;

				if(inum[j] == '7')

					dec = dec + 7*x;

			}

			if(inum[0] == '1')

				dec = dec +1;

			if(inum[0] == '2')

				dec = dec + 2;

			if(inum[0] == '3')

				dec = dec + 3;

			if(inum[0] == '4')

				dec = dec + 4;

			if(inum[0] == '5')

				dec = dec + 5;

			if(inum[0] == '6')

				dec = dec + 6;

			if(inum[0] == '7')

				dec = dec + 7;

			printf("\nNumero decimal: %d ", dec);

			return 0;

		case 8:

			printf("\nDigite o numero decimal: ");

			scanf("%d", &d_num);

			getchar();

			while(d_num > 0){

				v_num[i] = d_num % 8;

				i++;

				d_num = d_num / 8;

			}

			printf("\n");

			printf("\nNumero octal: ");

			for(j = i - 1; j >= 0; j--)

				printf("%d", v_num[j]);

			return 0;		

		default:

			printf("\nDigite uma opcao valida!");	

	}

	}while(menu);

	return 0;

}