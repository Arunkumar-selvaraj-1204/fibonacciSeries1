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