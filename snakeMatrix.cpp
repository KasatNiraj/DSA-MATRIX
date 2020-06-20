/*  Function to print the matrix in snake pattern
    mat[][]: input matrix
    n: size of matrix n x n
*/
void print(int mat[][100],int n)
{
    for(int i=0;i<n;i++){
        if(i%2==0){ //for even rows print elements from L to R
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        
        }
        }
        else if(i%2!=0){ //for odd rows print elements from R to L
            for(int j=n-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
    
}
