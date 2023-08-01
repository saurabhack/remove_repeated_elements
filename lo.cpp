#include<iostream>
using namespace std;
void deleteele(int arr[],int index ){
    int size=6;
    for(int i=index;i<size-1;i++){
        if(i==size-1){
            size=size-1;
        }
        else
        arr[i]=arr[i+1];
        
    }
}
int main()
{
    int size=5;
    int arr[]={5,2,5,1,4};
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                
                deleteele(arr,j);
                size=size-1;
            }
        }
    }   
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" "<<endl;
    }
    return 0;
}