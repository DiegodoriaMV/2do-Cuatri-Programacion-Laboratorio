#include <stdio.h>
#include <stdlib.h>

calcularSupCirculo(float radio);

int main()
{
	float r;
	float sup;

	printf("ingrese radio = ");
	scanf("%d", &r);
   
	sup = calcularSupCirculo(r);

	printf("la superficie es: %f.2", sup)
    return 0;
}

float calcularSupCirculo(float radio)
{
	
	float superficie;

	superficie = 3.14 * radio * radio;

	return superficie;



}
