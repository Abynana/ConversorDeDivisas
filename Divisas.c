//Estamos haciendo una prueba de conversor,
//esperemos que funcione

#include <stdio.h>
#include <stdlib.h>

int main(){
//valores actuales al momento de realización del programa//
	float dolarcito = 0.050;
	float eurito = 0.042;
	float librita = 0.036;
	float ValorDeConversion, Resultado;
	int Conversion, opcion;

//Menú para elegir el tipo de conversion que se va a realizar 
	printf ("¿Qué conversión desea hacer?\n");
	printf ("1.- Convertir de dólares a peso?\n");
	printf ("2.- Convertir de euros a pesos\n");
	printf ("3.- Convertir de libras a pesos\n");
	printf ("4.- Convertir de pesos a dólare\ns");
	printf ("5.- Convertir de pesos a euros\n");
	printf ("6.- Convertir de pesos a libras\n");
	scanf ("%d",&opcion);
		
//Apartado para elegir la cantidad a convertir
if (opcion >= 7){
    	printf("Elige una opcion valida\n");
    	exit (0);
}
else{
    	printf("Introduzca el valor a covertir, porfavor\n");  
    	scanf("%f", &ValorDeConversion);
		
        //Apartado que imprimirá el resultado
		switch ( opcion ){
			case 1:
				Resultado = ValorDeConversion * dolarcito;
                printf ("El resultado de %f * %f = %f",ValorDeConversion,dolarcito,Resultado);
			break;
			case 2:
				Resultado = ValorDeConversion * eurito;
                printf ("El resultado de %f * %f = %f",ValorDeConversion,eurito,Resultado);
				break;
			case 3:
				Resultado = ValorDeConversion * librita;
                printf ("El resultado de %f * %f = %f",ValorDeConversion,librita,Resultado);
				break;
			case 4:
				Resultado = ValorDeConversion / dolarcito;
                printf ("El resultado de %f / %f = %f",ValorDeConversion,dolarcito,Resultado);
				break;
			case 5:
				Resultado = ValorDeConversion / eurito;
                printf ("El resultado de %f / %f = %f",ValorDeConversion,eurito,Resultado);
				break;
			case 6:
				Resultado = ValorDeConversion / librita;
                printf ("El resultado de %f * %f = %f" ,ValorDeConversion,librita,Resultado);
				break;
			case 7:
				printf ("Salir");
				exit (0);
			default:
                printf ("Salir\n");
        }		
	}
	return 0;	
}
