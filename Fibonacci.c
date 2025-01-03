#include <stdio.h>
#include <stdlib.h>

int* FibonacciSeries(int n){
    int firstNum = -1, secondNum = 1, newTwo;
    
    int* array = (int*)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++){
        newTwo = firstNum+secondNum;
        array[i] = newTwo;
        firstNum = secondNum, secondNum = newTwo;
    }
    
    return array;
}

int sumSeries(int *arr,int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        
        sum+=arr[i];
    }
    return sum-1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int* array = FibonacciSeries(n);
    
    
}