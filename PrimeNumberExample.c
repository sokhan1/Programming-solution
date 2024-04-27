#include<stdio.h>

int* RangeArray(N,M){
    int size=M-N+1;
    int *Array=(int*)malloc(size*sizeof(int));

    if (Array=NULL){
        printf("Memory allocation failed/n");
        exit(1);
    }

    for (int i=0; i<=size ; i++){
        Array=N;
        
        N++;
    }

    for (int j=0; j<size; j++){
        printf("%d",Array[j]);
    }
    return Array;
}

// int FindPrimeNumber(){

    
// }

// int Minimun(){
     
// }

int main(){
    int N;
    int M;
    int *p;
    printf(" input N ");
    scanf_s("%d", &N);
    printf(" input M ");
    scanf_s("%d", &M);

    if (N && M >0){
        p=RangeArray(N,M);
    }
    else{
        printf("Failed");
    }
}
