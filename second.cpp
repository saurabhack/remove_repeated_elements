#include<iostream>
#include<algorithm>
using namespace std;
void deleteele(int arr[],int index){
    int size=8;
    for(int i=index;i<size;i++){
        if(i==size-1){
            size=size-1;
        }
        else{
            arr[i]=arr[i+1];
        }
    }
}
int main()
{
    
    int size=8;
    int arr[]={4,2,1,3,1,2,3,4};
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            deleteele(arr,i+1);
            size=size-1;
        }
    }
    for(int j=0;j<size;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}