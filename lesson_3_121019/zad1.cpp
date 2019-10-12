#include <iostream>
using namespace std;
char duma[1024];
int kolkoPyti[256];
int main (){
    char c;
    cin >> duma;
    for(int i=0;duma[i]!='\0';i++){
        kolkoPyti[duma[i]]++;
    }
    for(int i=0;i<256;i++){
        c = i;
        if(kolkoPyti[i] != 0){
            cout << c << " " << kolkoPyti[i] << endl;
        }
    }
    return 0;
}
