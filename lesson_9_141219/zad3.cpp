#include <iostream>
using namespace std;

///      keyd    "peasruqbihdvzjtcmnkxfgyolw";
/// char key[] = "abcdefghijklmnopqrstuvwxyz";
    char key[] = "chpkbuvjinsyqrxagedoflztwm";
    char text[1024];

void enc(){ /// криптира с този ключ
    int i = 0;
    while(text[i]!='\0'){
        text[i] = key[text[i] - 'a'];
        ++i;
    }
}
void dec(){ /// декриптира с този ключ
    char keyd[26];
    int i;
    for(i=0;i<26;i++){
        keyd[key[i] - 'a'] = i + 'a';
    }
    i = 0;
    while(text[i]!='\0'){
        text[i] = keyd[text[i] - 'a'];
        ++i;
    }
}

int main (){
    while(true){
    cin >> text;
        enc();
        cout << text << " -> ";
        dec();
        cout << text << endl;
    }
}
