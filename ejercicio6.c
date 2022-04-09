//Raul Zapata Villalobos - 2019900803
//Ejercicio resuleto individualmente

#include <stdio.h>

int main(){

	int num1, num2, num3;
	printf("Ingrese 3 numeros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	if((num1%2==0 && num2%2==0 && num3%2==0) || (num1%2!=0 && num2%2!=0 && num3%2!=0)){
		printf("Uniforme\n");
	}else if(((num1%2==0 && num2%2==0) || (num2%2==0 && num3%2==0) || (num1%2==0 && num3%2==0)) || ((num1%2!=0 && num2%2!=0) || (num2%2!=0 && num3%2!=0) || (num1%2!=0 && num3%2!=0))) {
		printf("Variadito\n");
	}
	return(0);
}

