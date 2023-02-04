#include <iostream>
using namespace std;
main(){
    string word;
    int count=0;
    cout << " Enter a string: ";
    getline(cin, word);
    int idx=0;
    while(word[idx]!='\0'){
        count = count +1;
        idx= idx + 1;
    }
    cout << "lenght is : " << count;
}
