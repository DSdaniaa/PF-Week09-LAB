#include <iostream>
using namespace std;
main(){
    string name;
    int length, count=0;
    cout << " Enter a string: ";
    cin >> name;
    length=name.length();
    for(int i=length-1;i>=0;i--){
        if(name[i]=='a'|| name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
    {
        count =count +1;
    }
    }
    cout << "Number of Vowels: " << count ;
}

