#include<iostream>
using namespace std;
void input(int arr[],int size){
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int linear_search(int arr[],int size,int target){
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // return index if found
        }
    }
    return -1; // if not found
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[100];
    input(arr,n);
    int target;
    cout<<"enter the element to be searced: "<<endl;
    cin>>target;
    int result=linear_search(arr,n,target);
    if(result==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index: "<<result<<endl;
    }
    return 0;
}