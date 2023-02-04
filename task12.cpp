#include <iostream>
using namespace std;
main(){
    int size;
    float sum=0;
    cout << "Enter the number of resistors: ";
    cin >> size;
    float Resistors[size];
    for(int i=0; i<size ; i++){
        cout << "Enter the resistance: ";
        cin >> Resistors[i];
    }
    for(int z=0; z<size; z++){
        sum = sum + Resistors[z];
    }
    cout << sum << " ohms";
}