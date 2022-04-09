//Raul Zapat Villalobos - 201990003
//ejercicio resuelto individualmente

#include <stdio.h>

int main(){

	int num1, num2, num3;
	printf("Ingrese tres numeros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	if(num1<0 && num2<0 && num3<0){
		printf("Todos\n");
	}else if ((num1<0 && num2<0) || (num2<0 && num3<0) || (num3<0 && num1<0)){
		printf("Al menos dos\n");
	}else if(num1<0 || num2<0 || num3<0){
		printf("Al menos uno\n");
	}
	else{
		printf("Ninguno\n");
	}
	
	return(0);
}	
