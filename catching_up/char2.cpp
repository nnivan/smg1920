#include <iostream>
using namespace std;
int main (){
    char duma[1234];
    cin>>duma;
    for(int i=0;duma[i]!='\0';i++){
        cout<<"na index "<<i<<endl;
        cout<<"ima char "<<duma[i]<<endl;
        cout<<endl;
    }
    cout<<duma<<endl;
    return 0;
}
