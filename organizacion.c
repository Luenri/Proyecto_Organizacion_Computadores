#include <stdio.h>
float celsiusKelvin(float a, float b);
float kelvinCelsius(float a, float b);
int main(){
	int op=0;
	float k=275.15;
	float celsius;
	float v;
	float v1;
	float kelvin;
	while (op!=5){
		printf("1.-Pasar de Celsius a kelvin\n2.- Pasar de Kelvin a celsius\n3.-Suma en celsius con resultado en kelvin\n");
		printf("Escoja un opcion: ");

		scanf("%d",&op);

		switch (op){
			case 1:
			printf("Ingrese temperatura en Celsius:\t");
			scanf("%f",&celsius);
			v=celsiusKelvin(k,celsius);
			printf("La temparatura en kelvin es : %.2f k \n",v);

			break;
			case 2:
			printf("Ingrese temperatura en kelvin:\t");
			scanf("%f",&kelvin);
			v1=kelvinCelsius(kelvin,k);
			printf("La temperatura en celsius es: %.2f °c\n",v1 );

			break;
			case 5:
			op=5;
			break;
		}

	}
}

float celsiusKelvin(float a, float b){
	float valor=a+b;
	return valor;
}

float kelvinCelsius(float a, float b){
	float valor =a-b;
	return valor;
}