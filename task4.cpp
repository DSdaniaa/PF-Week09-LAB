#include <iostream>
using namespace std;
main(){
    int size, num;
    cout << "Enter the size of the array: ";
    cin >> size;
    int number[size];
    for(int i=0; i<size; i++){
        cout << "Enter a number : ";
        cin >> number[i];
    }
    cout << "Enter the number you want to multiply :";
    cin >> num;
    for(int i=(size-1); i>=0; i--){
        cout << number[i]*num << " ";

    }
}
