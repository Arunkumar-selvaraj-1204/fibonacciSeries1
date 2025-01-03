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

int* FibonacciSeriesEvenNumbers(int* arr, int n){
    int i,size=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0) size++;
    }
    int* even = (int*)malloc(size*sizeof(int));
    int j=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j++]=arr[i];
        } 
    }
    return even;
}

int* FibonacciSeriesOddNumbers(int* arr, int n){
    int i,size=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0) size++;
    }
    int* odd = (int*)malloc(size*sizeof(int));
    int j=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            odd[j++]=arr[i];
        } 
    }
    return odd;
}

int sumSeries(int *arr, int n){
    int i, sum=0;
    for(i=0; i<n; i++){
        sum+=arr[i];
    }

    return sum;
}

int nthElement(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return nthElement(n-1)+nthElement(n-2);
}

int getMaxValue(int* arr,int n){
    return arr[n-1];
}

int main()
{
    int n;
    scanf("%d", &n);
    int* array = FibonacciSeries(n);
    for(int i=0; i<n; i++) printf("%d ", array[i]);
    printf("\n");
    int* even=FibonacciSeriesEvenNumbers(array,n);
    for(int i=0; i<sizeof(even)/sizeof(even[0]); i++) printf("%d ", even[i]);
    printf("\n");
    int* odd=FibonacciSeriesOddNumbers(array,n);
    for(int i=0; i<sizeof(odd)/sizeof(odd[0]); i++) printf("%d ", odd[i]);
    printf("\n%d",nthElement(n));
    printf("\n%d",getMaxValue(array,n));
}