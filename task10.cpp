#include <iostream>
using namespace std;
main(){
    string name;
    char letter;
    int length;
    bool flag=false;
    cout << " Enter the character: ";
    cin >> letter;
    cout << " Enter a string: ";
    cin >> name;
    length= name.length();
    if(name[length-1]==letter){
        flag=true;
    }
    cout << flag;
}    


