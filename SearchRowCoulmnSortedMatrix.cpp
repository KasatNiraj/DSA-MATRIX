/*  Function to search x in the input matrix
*   every row and column is sorted in increasing order
*   n, m: rows and columns of matrix
*   x: element to check presence in matrix
*   mat[][]: input matrix
*/
int search( int n,int m, int x, int mat[SIZE][SIZE])
{
    //checking if element is out of boundary elements
    if (n == 0 || m==0) 
        return 0;
    
    if(x<mat[0][0] || x>mat[n-1][m-1])
        return 0;
    int i=0;
    int j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==x)
            return 1;
        else if(mat[i][j]>x) //if element in current column
                  j--;      //is greater then search in j--
        else               //if element in current row is smaller
             i++;         //then search in i++
    }
    return 0;
    
}
