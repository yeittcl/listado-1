//Raul Zapata Villalobos - 2019900803
//Ejercicio resuelto individualmente

#include <stdio.h>

int main(){
  int x1, y1, x2, y2, x3, y3;
  printf("Ingrese la primera coordenada: ");
  scanf("%d%d", &x1, &y1);
  printf("Ingrese la segunda coordenada: ");
  scanf("%d%d", &x2, &y2);
  printf("Ingrese la tercera coordenada: ");
  scanf("%d%d", &x3, &y3);

  if(x1>x2 || x2>x1){
    if(y1>y2 || y2>y1){
      if((x3<=x1 && x3>=x2 && y3<=y1 && y3>=y2) || (x3<=x2 && x3>=x1 && y3<=y2 && y3>=y1)){
        printf("Contenido\n");
      }else{
        printf("No Contenido\n");
      }
    }
  }

  return(0);
}
