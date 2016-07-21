#include <stdio.h>
//#include <time.h>			argh era só o SRAND...
#include <windows.h>
#include <stdlib.h>
#include <locale.h>
							//Variavel Global só terá graça se você ligar esse comentario.							
							//int contador = 0;
				
// Prototipo das funções
int** encheVetor();
int aleartorio();
//Inicio do programa.

int main()
{	
	setlocale(LC_ALL, "Portuguese");

		int i = 0;
		int** vetor;
		int numeros[10];

		while(i < 10)
		{
		vetor = encheVetor();		
		numeros[i] = *vetor[i];
		printf("\nNúmero escolhido: %d\n",numeros[i]);
		system("pause");
		i++;
		}
		
		system("cls");
		printf("\n\n--------------------------------------------------------\n\n");
		for(int i = 0; i < 10; i++)
		{
			printf("Vetor Final[%d] = %d\n",i+1,numeros[i]);
		}
		
		
		
}

int** encheVetor()
{
	system("cls");
	//contador++;
	int numeros[10];
	int* ponteiroDoVetor[10];
	int v[10];
	
	//printf("\n\n%dº Vetor\n\n",contador); e esse também

	for(int i = 0; i < 10; i++)
	{
		numeros[i] = aleartorio();		// Enchendo o vetor...
		ponteiroDoVetor[i] = &numeros[i];
		printf("Array[%d] = %d\n",i+1, numeros[i]);
	}
	
	printf("\nEscolhendo valor do vetor...\n\n");
	_sleep(2000);
	printf("-----------------------------------\n\n");
	
	return ponteiroDoVetor;
}

int aleartorio()
{
	//int x = srand(time(NULL));		depois vejo como se faz isso!!! hehe me esqueci
	int numero = rand() % 100;
	return numero;
}
