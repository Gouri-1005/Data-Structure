// Rotate the matrix by 90 degrees
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row: ";
    cin>>n;
    cout<<"Enter the col: ";
    cin>>m;
    int matrix[n][m];
    int ans[m][n];
    
    cout<<"Enter the elements of the matrix:"<<endl; //taking inputs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)   // rotate
    {
        for(int j=0;j<m;j++)
        {
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    for(int i=0;i<m;i++)  //output
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
