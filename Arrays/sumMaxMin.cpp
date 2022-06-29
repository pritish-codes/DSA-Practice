/*You are given an array “ARR” of size N. Your task is to find out
 the sum of maximum and minimum elements in the array. */



int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    
    int max=-1514547854;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=1514547854;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return (max+min);
    
    
}