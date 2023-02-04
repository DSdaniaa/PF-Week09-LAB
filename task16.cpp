#include <iostream>
using namespace std;
main(){
    string name;
    int x=0;
    int length;
    cout << " Enter a string: ";
    getline(cin, name);
    length=name.length();
    char newName[length];

    for(int i=0 ;i<length;i++){
        if(name[i]=='a'|| name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
       {
        
        continue;

       }
       else{
        newName[x]=name[i];
        x++;
       }
    }
    
    cout << newName ;
}
