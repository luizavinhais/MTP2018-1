// Luiza Siqueira Vinhais	
// Matricula 11721EBI020

#include <stdio.h>



int main()

{	int menu, x, y, z=0, binx[32], i=0, j,biny[32], binz[32];

	do{

		printf("1 - NOT\n2 - AND\n3 - OR\n4 - XOR\n5 - Right Shift\n6 - Left Shift");

		printf("\n\nDIGITE: ");

		scanf("%d", &menu);

		getchar();

		switch(menu)

		{

			case 1:

				printf("Digite um numero inteiro A: ");

				scanf("%d", &x);

				getchar();

				z = ~x;

				printf("NOT %d (", x);

				if(x < 0)

					x = x*(-1);

				while(x>0){

					binx[i] = x % 2;

					i++;

					x = x / 2;

				}

				for(j = i; j<32; j++)

					binx[j] = 0;

				for(j = 31; j>=0; j--){

					if(binx[j] == 1)

						printf("0");

					else

						printf("1");

				}

				printf(")");

				i=0;

				j=0;

				printf(": %d (", y);

				while(y>0){

					binz[i] =  y % 2;

					i++;

					y = y / 2;

				}

				for(j = i; j<32; j++)

					binz[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binz[j]);

					printf(")");	

				return 0;

			case 2:

				printf("Digite um numero inteiro A: ");

				scanf("%d", &x);

				getchar();

				printf("Digite um numero inteiro B: ");

				scanf("%d", &y);

				z = x & y;

				printf("%d (", x);

				while(x>0){

					binx[i] = x % 2;

					i++;

					x = x / 2;

				}

				for(j = i; j<32; j++)

					binx[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binx[j]);

					printf(")");	

				i=0;

				j=0;	

				printf("AND %d (", y);

				while(y>0){

					biny[i] = y % 2;

					i++;

					y = y / 2;

				}

				for(j = i; j<32; j++)

					biny[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", biny[j]);

					printf(")");

				i=0;

				j=0;

				printf(": %d (", z);

				while(z>0){

					binz[i] =  z % 2;

					i++;

					z = z / 2;

				}

				for(j = i; j<32; j++)

					binz[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binz[j]);

					printf(")");

				return 0;

			case 3:

				printf("Digite um numero inteiro A: ");

				scanf("%d", &x);

				getchar();

				printf("Digite um numero inteiro B: ");

				scanf("%d", &y);

				z = x | y;

				printf("%d (", x);

				while(x>0){

					binx[i] = x % 2;

					i++;

					x = x / 2;

				}

				for(j = i; j<32; j++)

					binx[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binx[j]);

					printf(")");	

				i=0;

				j=0;	

				printf("OR %d (", y);

				while(y>0){

					biny[i] = y % 2;

					i++;

					y = y / 2;

				}

				for(j = i; j<32; j++)

					biny[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", biny[j]);

					printf(")");

				i=0;

				j=0;

				printf(": %d (", z);

				while(z>0){

					binz[i] =  z % 2;

					i++;

					z = z / 2;

				}

				for(j = i; j<32; j++)

					binz[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binz[j]);

					printf(")");

				return 0;

			case 4:

				printf("Digite um numero inteiro X: ");

				scanf("%d", &x);

				getchar();

				printf("Digite um numero inteiro Y: ");

				scanf("%d", &y);

				z = x ^ y;

				printf("%d (", x);

				while(x>0){

					binx[i] = x % 2;

					i++;

					x = x / 2;

				}

				for(j = i; j<32; j++)

					binx[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binx[j]);

					printf(")");	

				i=0;

				j=0;	

				printf("XOR %d (", y);

				while(y>0){

					biny[i] = y % 2;

					i++;

					y = y / 2;

				}

				for(j = i; j<32; j++)

					biny[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", biny[j]);

					printf(")");

				i=0;

				j=0;

				printf(": %d (", z);

				while(z>0){

					binz[i] =  z % 2;

					i++;

					z = z / 2;

				}

				for(j = i; j<32; j++)

					binz[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binz[j]);

					printf(")");

				return 0;

			case 5:

				printf("Digite um numero inteiro A: ");

				scanf("%d", &x);

				getchar();

				printf("Digite um numero inteiro B: ");

				scanf("%d", &y);

				z = x >> y;

				printf("%d (", x);

				while(x>0){

					binx[i] = x % 2;

					i++;

					x = x / 2;

				}

				for(j = i; j<32; j++)

					binx[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binx[j]);

					printf(")");	

				i=0;

				j=0;	

				printf("Right Shift %d (", y);

				while(y>0){

					biny[i] = y % 2;

					i++;

					y = y / 2;

				}

				for(j = i; j<32; j++)

					biny[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", biny[j]);

					printf(")");

				i=0;

				j=0;

				printf(": %d (", z);

				while(z>0){

					binz[i] =  z % 2;

					i++;

					z = z / 2;

				}

				for(j = i; j<32; j++)

					binz[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binz[j]);

					printf(")");

				return 0;

			case 6:

				printf("Digite um numero inteiro X: ");

				scanf("%d", &x);

				getchar();

				printf("Digite um numero inteiro Y: ");

				scanf("%d", &y);

				z = x << y;

				printf("%d (", x);

				if(x<0)

					x = x*(-1);

				while(x>0){

					binx[i] = x % 2;

					i++;

					x = x / 2;

				}

				for(j = i; j<32; j++)

					binx[j] = 0;

				for(j = 31; j>=0; j--){

					if(binx[j] == 1)

						printf("0");

					else

						printf("1");

				}

				printf(")");

				i=0;

				j=0;	

				printf("Left Shift %d (", y);

				while(y >0){

					biny[i] = y % 2;

					i++;

					y = y / 2;

				}

				for(j = i; j<32; j++)

					biny[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", biny[j]);

					printf(")");

				i=0;

				j=0;

				printf(": %d (", z);

				while(z>0){

					binz[i] =  z % 2;

					i++;

					z = z / 2;

				}

				for(j = i; j<32; j++)

					binz[j] = 0;

				for(j = 31; j>=0; j--)

					printf("%d", binz[j]);

					printf(")");

				return 0;

		}

	}while(menu);

	return 0;

}