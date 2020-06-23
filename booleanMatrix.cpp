void booleanMatrix(int r, int c, int a[SIZE][SIZE])
{
    int ar[r]; //array to store index of set row element
    int ac[c]; //array to store index of set row element
    memset(ar,0,sizeof(ar)); //initializing set row array as 0
    memset(ac,0,sizeof(ac)); //initializing set column array as 0
    
    //checking for the set element
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==1){
                ar[i]=1; //initializing row index to be set as 1
                ac[j]=1; //initializing column index to be set as 1
            }
        }
    }
    
    //filling up the rows
    for(int i=0;i<r;i++){
        if(ar[i]==1){
            for(int j=0;j<c;j++)
                a[i][j]=1;
        }
    }
    //filling up the columns
    for(int i=0;i<c;i++){
        if(ac[i]==1){
            for(int j=0;j<r;j++)
                a[j][i]=1;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
