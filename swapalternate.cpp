//Swap Alternate numbers in an array
#include<iostream>
using namespace std;
void swap(int *arr,int n){
    int j=1;
    for(int i=0;i<n-1;){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j+=2;
        i+=2;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    swap(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}