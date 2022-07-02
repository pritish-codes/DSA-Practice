long long int binarySearch(int N){
    int s=0;
    unsigned long long int e=N;
       long long int mid=s+(e-s)/2;
     int ans=-1;
    while(s<=e){
       long long int square=mid*mid;
        if(square==N){
            return  mid;
        }
        if(square<N){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
        
    }
    return ans;
    
}



int sqrtN(long long int N)
{
    // Write your code here
    return binarySearch(N);
}