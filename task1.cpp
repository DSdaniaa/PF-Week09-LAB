#include <iostream>
using namespace std;
main(){
    int size, sum=0;
    float avg=0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int number[size];
    for(int i=0; i<size; i++){
        cout << "Enter a number : ";
        cin >> number[i];
    }
    for(int z=0; z<size ; z++){
        sum = sum + number[z];

    }
    avg= sum/size;
    cout << "sum : " << sum << endl;
    cout << "average : "<< avg ;
}