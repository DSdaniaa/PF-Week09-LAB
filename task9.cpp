#include <iostream>
using namespace std;
main(){
    string word;
    cout << " Enter a string: ";
    getline(cin, word);
    int idx=0;
    while(word[idx]!='\0'){
        idx= idx + 1;
    }
    for(int i=idx; i>=0; i--){
        cout << word[i];
    }
    
}