#include <stdio.h>
//#include <time.h>			argh era s� o SRAND...
#include <windows.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

							//Variavel Global s� ter� gra�a se voc� ligar esse comentario.							
							int contador = 0;
				
// Prototipo das fun��es
int** encheVetor();
int aleartorio();
//Inicio do programa.

int main()
{	
	setlocale(LC_ALL, "Portuguese");

		int i = 0;
		int** vetor;
		int numeros[TAM];

		srand(time(NULL));

		while(i < TAM)
		{
		int posicaoAleartoria = rand() % TAM;
		vetor = encheVetor();		
		numeros[i] = *vetor[posicaoAleartoria];
		printf("\nN�mero escolhido: %d\n",numeros[i]);
		system("pause");
		i++;
		}
		
		system("cls");
		printf("\n\n--------------------------------------------------------\n\n");
		for(i = 0; i < TAM; i++)
		{
			printf("Vetor Final[%d] = %d\n",i+1,numeros[i]);
		}
		
		
		
}

int** encheVetor()
{
	system("cls");
	contador++;
	int numeros[TAM];
	int* ponteiroDoVetor[TAM];
	int v[TAM];
	
	printf("\n\n%d� Vetor\n\n",contador); 
	int i;
	for(i = 0; i < TAM; i++)
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
	int numero = rand() % 100;
	return numero;
}
