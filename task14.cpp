#include <iostream>
using namespace std;
main(){
    int array[4];
    float num,sum;
    cout << "Enter the Total due: ";
    cin >> num;
    cout <<"Enter change in quarters: ";
    cin >> array[0];
    cout <<"Enter change in dimes: ";
    cin >> array[1];
    cout <<"Enter change in nickel: ";
    cin >> array[2];
    cout <<"Enter change in pennies: ";
    cin >> array[3];
    sum = (array[0]*0.25)+(array[1]*0.1)+(array[2]*0.05)+(array[3]*0.01);
    if(num>sum){
        cout << "False";
    }
    else{
        cout << "True";
    }


}