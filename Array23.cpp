// Leaders in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,22,12,3,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        bool leader= true;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                leader=false;
                break;
            }
        }
        if(leader==true)
        {
             cout<<arr[i]<<" ";
        }
    }
}
