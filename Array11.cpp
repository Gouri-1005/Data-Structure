// Maximum consecutive ones 
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,0,1,0,1,1};
    int maxi=0;
    int cnt=0;
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<"the consecutive ones are: "<<maxi<<endl;
    return 0;
}