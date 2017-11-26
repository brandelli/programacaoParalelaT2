#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define n 10

int main (int argc, char *argv[]) 
{
int   i,j,aux;
int vet[10] = {8,89,12,3,6,65,43,21,12,1}; 
int chunk = 4;


for(i=0;i<n;i++)
  printf("  %d",vet[i]);

printf("\n");


for(j=n-1; j >= 1; j--) {
 
#pragma omp parallel for schedule (static, chunk) shared(vet,chunk) private(i)
  for (i=0; i < n-1; i++){
    if(vet[i]>vet[i+1]){
      aux=vet[i];
      vet[i]=vet[i+1];
      vet[i+1]=aux;      
    }
  }
}


for(i=0;i<n;i++)
  printf("  %d",vet[i]);

printf("\n");
}
