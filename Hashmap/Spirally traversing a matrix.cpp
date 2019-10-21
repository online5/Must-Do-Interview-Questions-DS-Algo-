
    
// Given a matrix mat[][] of size M*N. Traverse and print the matrix in spiral form.
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	int n,m,i,j;
	cin>>m;
	cin>>n;
	int a[m][n];
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	int sr=0,sc=0;//sr=starting row,sc=starting column
	while(sr<m && sc<n)
	{
	   for(i=sr;i<n;i++){ 
	    cout<<a[sr][i]<<" ";
	   }
	   sr++;
	    for(i=sr;i<n;i++){ 
	    cout<<a[i][n-1]<<" ";
	   }
	   n--;
	   if(sr<m) 
	   { 
            for(i=n-1;i>=sc;i--) 
            { 
                cout<<a[m-1][i]<< " "; 
            } 
            m--; 
        }
        if (sc<n) 
        { 
            for (i=m-1;i>=sr;i--) 
            { 
                cout<<a[i][sc]<< " "; 
            } 
            sc++; 
        }
	}
	}
	return 0;
}

