#include <iostream>
using namespace std;
main(){
    string word;
    int idx=0;
    cout << " Enter a string : ";
    getline(cin, word);
    while( word[idx] !='\0'){
        cout << "charcter: " << word[idx] << " index: " << idx << endl;
        idx++;
    }
}