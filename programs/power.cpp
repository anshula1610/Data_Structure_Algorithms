#include<iostream>
using namespace std;
long long power(long long a,long long b){
    long long product=1;
    for(long long i=0;i<b;i++){
        product=product*a;
    }
    return product;
    

}
int main(){
    long long a,b;
     cout<<"Enter the value of the number: "<<endl;;
     cin>>a;
     cout<<"enter the number of times the power of a to be evaluated: "<<endl;
     cin>>b;
     long long result=power(a,b);
     cout<<a<<"^"<<b<<":"<<result<<endl;
     return 0;
}