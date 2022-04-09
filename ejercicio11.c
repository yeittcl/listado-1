//Raul Zapata Villalobos - 2019900803
//Ejercicio resuleto individualmente
//Usuario Timus: Raul Zapata

#include <stdio.h>

int main(){
  int dragons;
  scanf("%d",&dragons);
  
  if(dragons >= 1 && dragons <= 4)
    printf("few");
    
  if(dragons >= 5 && dragons <= 9)
    printf("several");
    
  if(dragons >= 10 && dragons <= 19)
    printf("pack");
    
  if(dragons >= 20 && dragons <= 49)
    printf("lots");
    
  if(dragons >= 50 && dragons <= 99)
    printf("horde");
    
  if(dragons >= 100 && dragons <= 249)
    printf("throng");
    
  if(dragons >= 250 && dragons <= 499)
    printf("swarm");
    
  if(dragons >= 500 && dragons <= 999)
    printf("zounds");
    
  if(dragons >= 1000 && dragons <= 2000)
    printf("legion");

  return(0);
}
