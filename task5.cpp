#include <iostream>
using namespace std;
main(){
    int size, smallest;
    cout << "Enter the size of the array: ";
    cin >> size;
    int number[size];
    for(int i=0; i<size; i++){
        cout << "Enter a number : ";
        cin >> number[i];
   }
   smallest= number[0];
   for( int z=0; z<size; z++){
    if(number[z]<smallest){
        smallest=number[z];
    }
   }
   cout << "smallest is: " << smallest;


}