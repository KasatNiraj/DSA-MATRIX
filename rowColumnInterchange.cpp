// Function to interchange rows
void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE])
{
    for(int i=0;i<n1/2;i++){ //running a loop till n1 will re-swap the swapped rows
        for(int j=0;j<m1;j++){
            swap(arr1[i][j],arr1[n1-1-i][j]);
        }
    }
}

// Function to interchange columns
void reverseCol(int n1, int m1, int arr1[SIZE][SIZE])
{
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1/2;j++){ ////running a loop till m1 will re-swap the swapped columns
            swap(arr1[i][j],arr1[i][m1-1-j]);    
        }
    }
}
