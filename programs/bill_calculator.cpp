#include<iostream>
using namespace std;
int main(){
    int amount;
    int notes;
    cout<<"Enter the amount: "<<endl;
    cin>> amount;
    switch(1){
        case 1:
        notes=amount/500;
        cout<<"500: "<<notes<<endl;
        amount=amount%500;

        case 2:
        notes=amount/100;
        cout<<"100: "<<notes<<endl;
        amount=amount%100;

        case 3:
        notes=amount/50;
        cout<<"50: "<<notes<<endl;
        amount=amount%50;

        case 4:
        notes=amount/20;
        cout<<"20: "<<notes<<endl;
        amount=amount%20;

        case 5:
        notes=amount/10;
        cout<<"10: "<<notes<<endl;
        amount=amount%10;

        case 6:
        notes=amount/5;
        cout<<"5: "<<notes<<endl;
        amount=amount%5;

        case 7:
        notes=amount/2;
        cout<<"2: "<<notes<<endl;
        amount=amount%2;

        case 8:
        notes=amount/1;
        cout<<"1: "<<notes<<endl;
        amount=amount%1;
        break;

        default:
        break;






    }
    return 0;
}