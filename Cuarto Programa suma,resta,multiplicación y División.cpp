#include <stdio.h>
int main (){
	float a,b;
	printf("ingrese dos numeros separados por enter: ");
	scanf("%f %f",&a,&b);
	printf("la Suma de %.2f mas %.2f es %.2f \n",a,b,a+b);
	printf("la Resta de %.2f menos %.2f es %.2f \n",a,b,a-b);
	printf("la Multiplicacion de %.2f por %.2f es %.2f \n",a,b,a*b);
	printf("la Divicion de %.2f entre %.2f es %.2f \n",a,b,a/b);
	return 0;
}
