#include<iostream>
using namespace std;
int factorial(int n){
    int factorial=1;
    for(int i=n;i>=1;i--){
        factorial=factorial*i;
    }
    return factorial;
}
float nCr(int n,int r){
    float result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;

}
int main(){
    int n,r;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of r: "<<endl;
    cin>>r;
    float answer=nCr(n,r);
    cout<<"the answer is:"<<answer<<endl;
    return 0;
}