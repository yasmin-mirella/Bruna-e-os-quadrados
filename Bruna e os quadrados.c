#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,i,j,x,y,contador=0,aux1=0,matriz[101][101]={0},aux=0, aux3=0, novo = 0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&matriz[i][j]);
    }
  }

  for(i=0;i<n;i++){
    contador=0;
    for(j=0;j<n;j++){
      if(matriz[i][j]==1){
        while(matriz[i][j]!=0){
          novo++;
          j++;
          contador++;
        }
          j=n;
      }
    }
    if(contador>=aux){
      aux=contador;
    }
  }
  if(aux==1){
    printf("%d",aux);
  }else if(novo == 100*100){
      printf("%d", novo);
  }
  else{
    contador=0;
    aux3 = aux;
      for(i=0;i<n;i++){
       for(j=0;j<n;j++){
         aux = aux3;
         if(matriz[i][j]==1){
            while(contador!=((aux+1)*(aux+1))){
              contador=0;
              for(x=i;x<(i+aux) && x < n;x++){
                for(y=j;y<(j+aux) && y < n;y++){
                  if(matriz[x][y]==1){
                    contador++;
                  }else{
                    x=n;
                    y=n;
                  }
                }
              }
              aux--;
            }
            if(contador>aux1){
              aux1=contador;
            }
          }
        }
      }
    printf("%d",aux1);
  }
  return 0;
}
