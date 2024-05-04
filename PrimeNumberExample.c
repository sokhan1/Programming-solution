#include<stdio.h>
#include<stdlib.h>

int* RangeArray(M,N){
    int size=M-N+1;
    int *Array=(int*)malloc(size*sizeof(int));
    int PrimeNumberArray[]={};
    int PrimeNumberCount=0;

    if (Array==NULL){
        printf("Memory allocation failed/n");
        exit(1);
    }
    else{
    for (int i=0; i<=size ; i++){
        Array[i]=M;
        
        M++;
    }
    // Find PrimeNumber
    for (int j=0; j<size; j++){
        PrimeNumberCount=0;

        for (int k=1; k<=Array[j]; k++){
            if (Array[j]%k==0){
                PrimeNumberCount+=PrimeNumberCount;
            }
        }
        if(PrimeNumberCount==2){
            PrimeNumberArray[j]=Array[j];
        }
        else{
            PrimeNumberArray[j]=0;
        }
    }
    // Find PrimeNumber

    // Check Elements of Array
    for (int i=0; i<=size; i++){
        printf(Array[i]);
    }
    for (int j=0; j<=size; j++)
    {
        printf(PrimeNumberArray[j]);
    }

    return Array;
}

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
    while(1)
        if (0<= N && M <=10000){
            if(M<=N){
                p=RangeArray(N,M);
                break;
            }
            else
            {
                printf("Failed");
            }
        }
        else{
            printf("Failed");
        }
}
