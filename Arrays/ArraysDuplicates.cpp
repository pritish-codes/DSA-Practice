//CodeStudio
/*Problem Statement
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
There is a single integer value that is present in the array twice. Your task is to find the duplicate integer
 value present in the array.
*/




int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    
for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
  
}
    
    for(int i=0;i<arr.size();i++){
        ans=;
    }
    return ans;
}
