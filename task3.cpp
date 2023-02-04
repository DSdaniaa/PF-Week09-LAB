#include <iostream>
using namespace std;
main(){
    int size;
    int num;
    bool flag= false;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << " Enter the number you want to find in array: ";
    cin >> num;
    int number[size];
    for(int i=0; i<size; i++){
        cout << "Enter a number : ";
        cin >> number[i];
        if(num==number[i]){
            flag=true;
        }
    }
    if(flag==true){
        cout << "Already Entered";
    }
    else{
        cout << "not found";
    }
    
}    