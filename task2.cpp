#include <iostream>
using namespace std;
main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int number[size];
    for(int i=0; i<size; i++){
        cout << "Enter a number : ";
        cin >> number[i];
    }
    for(int z=(size-1); z>=0 ; z--){
        cout << number[z] << " ";
    }   
}