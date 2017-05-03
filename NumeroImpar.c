#include <stdio.h>
#include <conio.h> 

int num_Ingresado = 0;
int contador = 0;

int main()
{
	
	printf("************************************** \n* 201212925 - Kebyn Hernan Felipe Co * \n**************************************\n");
	printf("\nIntroduce un numero:\n");
	scanf( "%i", &num_Ingresado );
	printf("\nLos numeros impares de 0 a %i son:\n" , num_Ingresado);
	do{
		if(!((contador%2) == 0)){
				printf( "%i\n", contador);
		}
		contador++;	
	}while(contador <= num_Ingresado);
	
	printf("\n\nPulsa cualquier tecla para salir..."); 
	getch(); 
	
    return 0;
}
