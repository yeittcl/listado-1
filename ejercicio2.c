//Raul Zapata Villalobos - 2019900803
//ejercicio resuelto individualmente

#include <stdio.h>

int main(){
	int num1, num2;
	printf("Ingrese dos numeros:");
	scanf("%d%d",&num1, &num2);
	if(num1 > num2){
		printf("%d\n", (2*num2));
	}else{
		printf("%d\n",(2*num1));
	}
	
	return(0);

}
