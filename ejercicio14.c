//Raul Zapata Villalobos - 2019900803
//Ejercicio resuleto individualmente
//Usuario Timus: Raul Zapata

#include <stdio.h>

int main(){
  int n, k;
  scanf("%d %d",&n, &k);
  if(n<=k){
    printf("2");
  }else if(2*n%k>=1){
    printf("%d",((2*n/k)+1));
  }else{
    printf("%d",(2*n)/k);
  }
  return(0);
}
