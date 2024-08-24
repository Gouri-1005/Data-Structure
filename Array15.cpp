// 2 sum problem 
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,6,5,8,11};
    int target=14;
    int n=sizeof(arr)/sizeof(arr[0]);
    bool found= false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {continue;}
            if(arr[i]+arr[j]==target)
            {
                found=true;
                cout<<"The 2 sum are giving us the target value."<<endl;
                cout<<"Index are:"<<i<<" "<<j<<endl;
            }
        }
        if(found)
        {
            break;
        }
    }
     if(!found)
            {
                cout<<"The 2 sum is not giving us the target value."<<endl;
            }
    return 0;
}