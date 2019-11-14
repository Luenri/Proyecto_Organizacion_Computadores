#include <stdio.h>
float celsiusKelvin(float a, float b);
float kelvinCelsius(float a, float b);
float sumakelvin(float a, float b);
int main(){
	int op=0;
	float k=275.15;
	float c;
	float c1;
	float v;
	while (op!=4){
		printf("1.-Pasar de Celsius a kelvin\n2.- Pasar de Kelvin a celsius\n"
			"3.-Suma en celsius con resultado en kelvin\n4.- Salir \n");
		printf("Escoja un opcion: ");

		scanf("%d",&op);

		switch (op){
			case 1:
			printf("Ingrese temperatura en Celsius:\t");
			scanf("%f",&c);
			v=celsiusKelvin(k,c);
			printf("La temparatura en kelvin es : %.2f k \n",v);

			break;
			case 2:
			printf("Ingrese temperatura en kelvin:\t");
			scanf("%f",&c);
			v=kelvinCelsius(c,k);
			printf("La temperatura en celsius es: %.2f °c\n",v);

			break;
			case 3:
			printf("Ingrese la temperatura 1:\t");
			scanf("%f",&c);
			printf("Ingrese la temperatura 2:\t");
			scanf("%f",&c1);
			v=sumakelvin(c,c1);
			printf("El resultado en kelvin es: %.2f k \n",v); 
			break;
			case 4:
			op=4;
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

float sumakelvin(float a, float b){
	a=a+275.15;
	printf("%f\n",a );
	printf("%f\n",b );
	b=b+275.15;
	float c=a+b;
	return c;
}