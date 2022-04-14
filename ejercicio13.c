//Raul Zapata Villalobos - 2019900803
//Ejercicio resuleto individualmente
//Usuario Timus: Raul Zapata

#include <stdio.h>

int main(){
  int lock1, lock2;
  scanf("%d%d",&lock1, &lock2);
   if(lock1%2 == 0 || lock2%2 != 0){
     printf("yes");
   }else{
     printf("no");
   }
   return(0);
}
