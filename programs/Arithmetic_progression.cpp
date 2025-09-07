#include<iostream>
using namespace std;
void AP(int n,int a,int d){
    int Tn=a+(n-1)*d;
    float s=(n/2.0)*(2*a+(n-1)*d);
    cout<<"the "<<n<<"th term is:"<<Tn<<endl;
    cout<<"the sum is: "<< s<<endl;
    }
    int main(){
        int n,a,d;
        cout<<"enter the first term of the ap: "<<endl;
        cin>>a;
        cout<<"enter the nth term that is to be found: "<<endl;
        cin>>n;
        cout<<"enter the common difference: "<<endl;
        cin>>d;

        AP(n,a,d);
        return 0;
    }
