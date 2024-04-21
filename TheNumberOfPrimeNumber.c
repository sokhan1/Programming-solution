#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void FindPrime(int * PrimeArray,int length){
    int i=0;
    int j=0;
    int count=0;
    for(i=0; i<length; i++){
        int count=0;
        int n=PrimeArray[i];
        for(j=1; j<n+1; j++){
            if(n%j==0){
                count++;
            }
            else{
                printf("");
            }
        }
        if(count==2){
            printf("%d\n",n);
        }
    }
   
}

int main()
{
    
    int N;
    printf("Input N:");
    scanf("%d",&N);
 
    int PrimeArray[N];
    int length=sizeof(PrimeArray)/sizeof(PrimeArray[0]);
    for(int i=0; i<length; i++ ){
        printf("Input number you want");
        scanf("%d",&PrimeArray[i]);
    }
    FindPrime(PrimeArray,length);
}
