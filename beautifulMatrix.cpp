// Function to find minimum number of operation
// Time: O(N * N)
// Space: O(N)
int findMinOpeartion(int matrix[][100], int n)
{
    int arr[2*n];
    int res=0;
    //setting all array elements to 0
    memset(arr,0,sizeof(arr));
    
    for(int i=0;i<n;i++){
        //first n array elements are sum of rows 0 to n-1
        for(int j=0;j<n;j++){
            arr[i]+=matrix[i][j];
        }
        //last n array elements are sum of columns 0 to n-1
        for(int k=0;k<n;k++){
            arr[i+n]+=matrix[k][i];
        }
        
    }
    int maxx=arr[0];
    for(int i=0;i<2*n;i++){
        maxx=max(arr[i],maxx);//finding the max element in arr
    }
    //substracting all elements from max and adding the result
    for(int i=0;i<2*n;i++){
        res+=(maxx-arr[i]);
    }
    return res/2;
}
