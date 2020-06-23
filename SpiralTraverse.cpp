// Time: O(N*M)
// Space: O(1)
void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    int i,l=0,k=0;
    /* k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index 
		i - iterator 
	*/

    while(k<m && l<n){
        //printing first row from remaining rows
        for(i=l;i<n;i++){
            cout<<ar[k][i]<<" ";
        }
        k++; 
        //printing last column from remaining columns
        for(i=k;i<m;i++){
            cout<<ar[i][n-1]<<" ";
        }
        n--;
        //printing last row from remaining rows
        if(k<m){
            for(i=n-1;i>=l;i--){
                cout<<ar[m-1][i]<<" ";
            }
        m--; 
        }
        //printing first column from remaining column
        if(l<n){
            for(i=m-1;i>=k;i--)
                cout<<ar[i][l]<<" ";
            l++; 
        }
    }
}
