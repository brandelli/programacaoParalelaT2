#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define ARRAY_SIZE 100000      // trabalho final com o valores 10.000, 100.000, 1.000.000

void bubbleSort(int n, int * vetor){
    int i, tmp, phase;
    #pragma omp parallel num_threads(4) shared(vetor, n) private(i, tmp, phase)
    for(phase = 0; phase < n; phase++){
        if(phase % 2 == 0){
            #pragma omp for
            for(i = 1; i < n; i+=2){
                if(vetor[i-1] > vetor[i]){
                    tmp = vetor[i-1];
                    vetor[i-1] = vetor[i];
                    vetor[i] = tmp;
                }
            }
        }else{
            for(i = 1; i < -1; i+=2){
                if(vetor[i] > vetor[i + 1]){
                    tmp = vetor[i-1];
                    vetor[i-1] = vetor[i];
                    vetor[i] = tmp;
                }
            }
        }
    }
}

int main(){
    int vetor[ARRAY_SIZE];

    for(int i = 0 ; i<ARRAY_SIZE; i++){
        vetor[i] = ARRAY_SIZE-i;
    }

    bubbleSort(ARRAY_SIZE, vetor);
    return 0;
}