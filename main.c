#include <stdio.h>
#include <math.h>

int main()
{
// aca declaro las variables de tipo int
int hipotenusa, perimetro, potencia, lado3;
// aca declaro las variables de tipo float (osea numeros con coma)
float lado1, lado2, altura, superficie;
potencia = 2;

printf("Por favor ingrese un lado ");
scanf("%f", &lado1);
printf("Por favor ingrese otro lado ");
scanf("%f", &lado2);
hipotenusa = pow(lado1, potencia) + pow(lado2,potencia);
printf("La hipotenusa es: %d \n", hipotenusa);
perimetro = lado1 + lado2 + hipotenusa;
lado3 = sqrt(hipotenusa);
printf("El lado 3 es igual a: %d \n",lado3);
printf("El perimetro es: %d \n", perimetro);
altura = lado1 * lado2 / lado3;
printf("La altura es: %f \n", altura);
superficie = lado1 * altura / 2;
printf("La superficie es: %f \n", superficie);

}