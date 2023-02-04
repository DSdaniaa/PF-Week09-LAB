#include <iostream>
using namespace std;
main(){
    int size;
    float sum=0;
    cout << "Enter the size of second array: ";
    cin >> size;
    int array2[size];
    int array1[2];
    int array3[size+2];
    cout << "Enter value for first array: ";
    cin >> array1[0];
    cout << "Enter value for first array: ";
    cin >> array1[1];
    for(int i=0; i<size; i++){
        cout << "Enter value for second array: ";
        cin >> array2[i];
    }
    array3[0]=array1[0];
    array3[size+1]= array1[1];
    for(int x=0; x<size; x++){
    
        array3[x+1]=array2[x];
        
        
    }
    for(int x=0; x<size+2; x++){
        cout << array3[x] << endl;
    }
}

