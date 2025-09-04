#include<iostream>
using namespace std;
int main(){

 
int x,y,z;

  cout<<"Enter x";

  cin>>x;

  cout<<"Enter y";

  cin>>y;

  cout<<"Enter z";

  cin>>z;

  x<y?x<z?cout<<"x":cout<<"z":y<z?cout<<"y":cout<<"z";
 
}