#include<iostream>
using namespace std;
int minimum(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;

}
int maximum(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
void input(int arr[],int n){
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100]; // assume max size 100
    input(arr, n);

    cout << "The array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"the minimum element is: "<<minimum(arr,n)<<endl;
    cout<<"the maximum element is: "<<maximum(arr,n)<<endl;
    return 0;


}