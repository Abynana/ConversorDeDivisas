//Estamos haciendo una prueba de conversor,
//esperemos que funcione

#include <stdio.h>
#include <stdlib.h>

	int main(){
		//valores actuales al momento de realización del programa//
		float dolarcito = 0.050;
		float eurito = 0.042;
		float librita = 0.036;
		float ValorDeConversion = 0;
		int Conversion;
        float Resultado;

        //Menú para elegir el tipo de conversion que se va a realizar 
		printf ("¿Qué conversión desea hacer?");
		printf ("1.- Convertir de dólares a pesos?");
		printf ("2.- Convertir de euros a pesos");
		printf ("3.- Convertir de libras a pesos");
		printf ("4.- Convertir de pesos a dólares");
		printf ("5.- Convertir de pesos a euros");
		printf ("6.- Convertir de pesos a libras");
		printf ("7.- Salir \t");
		
        //Apartado para ingresar el valor deseado
		printf ("\t Introduzca el valor a covertir, porfavor \t");
		scanf ("%f",&ValorDeConversion);
		
        //Apartado que imprimirá el resultado
		switch ( Conversion ){
			Case 1:
				//Resultado = ValorDeConversion * dolarcito
                printf ("El resultado de %f * %f = %f" ValorDeConversion,dolarcito,Resultado);
				break;
			Case 2:
				//Resultado = ValorDeConversion * eurito
                printf ("El resultado de %f * %f = %f" ValorDeConversion,eurito,Resultado);
				break;
			Case 3:
				//Resultado = ValorDeConversion * librita
                printf ("El resultado de %f * %f = %f" ValorDeConversion,librita,Resultado);
				break;
			Case 4:
				//Resultado = ValorDeConversion / dolarcito
                printf ("El resultado de %f / %f = %f" ValorDeConversion,dolarcito,Resultado);
				break;
			Case 5:
				//Resultado = ValorDeConversion / eurito
                printf ("El resultado de %f / %f = %f" ValorDeConversion,eurito,Resultado);
				break;
			Case 6; 
				//Resultado = ValorDeConversion / librita
                printf ("El resultado de %f * %f = %f" ValorDeConversion,librita,Resultado);
				break;
			Case 7;
				printf ("Salir\n");
				exit (0);
            default;
                printf ("Salir\n")
        }		
	}
	Return 0;	
}







