#include<iostream>
using namespace std;
void input(int arr[],int size){
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    cout<<"the array elements after reversing are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int n;
    cout<<"enter the total number of elements in array: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    input(arr,n);
    return 0;
}