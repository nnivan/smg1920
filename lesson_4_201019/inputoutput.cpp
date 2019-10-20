#include <iostream>
using namespace std;
int main (){
    char duma[1024];
    cin.get(duma, 1024, '.');
    if(duma[0] == '\n'){
        cout << "da";
    }else{
        cout << "ne";
    }
    cout << "wow" << endl;
    cout<<endl;
    return 0;
}
/*
3
3 4
4 1
3 3

12
4
9
*/
/**
3 3 4 4 1 3 3

3
3 4
12 4 1
4 3 3
9

3
3 4
4 1
3 3

12 4 9

*/
