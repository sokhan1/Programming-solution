#include<stdio.h>
#include<string.h>

int sum(){

}

int main(){
    int a;
    int index=0;
    int array[]={};
    printf("Input the number you want");
    scanf("%d", &a);

    for ( int i =1; i <= a; i++ ){
    
        for( int j=0; j<i; j++)
        array[index]=i;
        index ++;
    }

    for(int k=0; k<=index; k++){

    printf("%d",array[k]);
    
    }

}
