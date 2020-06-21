/*  Function to rotate matrix by 90 degrees
*   n: input for matrix size
*   N: size defined globally
*/
void rotateby90(int n, int a[][N]){
    
    //first finding the transpose of a matrix 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            swap(a[i][j],a[j][i]);
    }
    
    //interchange row[i] with row[n-1-i]
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++)
            swap(a[i][j],a[n-i-1][j]);
    }
    
}
