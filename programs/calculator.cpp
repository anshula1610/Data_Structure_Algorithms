#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    int n;
    cout<<"Enter the choice in number: eg 1-add \n 2-sub \n 3-mul \n 4-div"<<endl;
    cin>>n;
    switch(n){
        case 1: cout<<(a+b);
        break;
        case 2: cout<<(a-b)<<endl;
        break;
        case 3: cout<<(a*b)<<endl;
        break;
        case 4: cout<<(a/b)<<endl;
        break;
        default:
        cout<<"Invalid choice"<<endl;
        break;
    }
}