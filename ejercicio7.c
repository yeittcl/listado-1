//Raul Zapata Villalobos - 2019900803
//Ejercicio resuleto individualmente

#include <stdio.h>

int main(){
  int num1, num2, num3, num4;
  printf("ingrese cuatro numeros enteros: ");
  scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

  //Bloque para el num1 mayor que todos
  if(num1>num2 && num1>num3 && num1>num4){
    if(num2>num3 && num2>num4){
      if(num3>num4){
        printf("%d > %d > %d > %d\n",num1, num2, num3, num4);
      }else{
        printf("%d > %d > %d > %d\n",num1, num2, num4, num3);
      }
    }else if(num3>num2 && num3>num4){
      if(num2>num4){
        printf("%d > %d > %d > %d\n",num1, num3, num2, num4);
      }else{
        printf("%d > %d > %d > %d\n",num1, num3, num4, num2);
      }
    }else if(num4>num2 && num4>num3){
      if(num2>num3){
        printf("%d > %d > %d > %d\n",num1, num4, num2, num3);
      }else{
        printf("%d > %d > %d > %d\n",num1, num4, num3, num2);
      }
    }
  }
  
  //Bloque para el num2 mayor que todos
  if(num2>num1 && num2>num3 && num2>num4){
    if(num1>num3 && num1>num4){
      if(num3>num4){
        printf("%d > %d > %d > %d\n",num2, num1, num3, num4);
      }else{
        printf("%d > %d > %d > %d\n",num2, num1, num4, num3);
      }
    }else if(num3>num1 && num3>num4){
      if(num1>num4){
        printf("%d > %d > %d > %d\n",num2, num3, num1, num4);
      }else{
        printf("%d > %d > %d > %d\n",num2, num3, num4, num1);
      }
    }else if(num4>num1 && num4>num3){
      if(num1>num3){
        printf("%d > %d > %d > %d\n",num2, num4, num1, num3);
      }else{
        printf("%d > %d > %d > %d\n",num2, num4, num3, num1);
      }
    }
  }
  
  //Bloque para el num3 mayor que todos
  if(num3>num2 && num3>num1 && num3>num4){
    if(num2>num1 && num2>num4){
      if(num1>num4){
        printf("%d > %d > %d > %d\n",num3, num2, num1, num4);
      }else{
        printf("%d > %d > %d > %d\n",num3, num2, num4, num1);
      }
    }else if(num1>num2 && num1>num4){
      if(num2>num4){
        printf("%d > %d > %d > %d\n",num3, num1, num2, num4);
      }else{
        printf("%d > %d > %d > %d\n",num3, num1, num4, num2);
      }
    }else if(num4>num2 && num4>num1){
      if(num2>num1){
        printf("%d > %d > %d > %d\n",num3, num4, num2, num1);
      }else{
        printf("%d > %d > %d > %d\n",num3, num4, num1, num2);
      }
    }
  }
  
  //Bloque para el num4 mayor que todos
  if(num4>num2 && num4>num3 && num4>num1){
    if(num2>num3 && num2>num1){
      if(num3>num1){
        printf("%d > %d > %d > %d\n",num4, num2, num3, num1);
      }else{
        printf("%d > %d > %d > %d\n",num4, num2, num1, num3);
      }
    }else if(num3>num2 && num3>num1){
      if(num2>num1){
        printf("%d > %d > %d > %d\n",num4, num3, num2, num1);
      }else{
        printf("%d > %d > %d > %d\n",num4, num3, num1, num2);
      }
    }else if(num1>num2 && num1>num3){
      if(num2>num3){
        printf("%d > %d > %d > %d\n",num4, num1, num2, num3);
      }else{
        printf("%d > %d > %d > %d\n",num4, num1, num3, num2);
      }
    }
  }
  return(0);
}
