#include <iostream>
#include <cstring>
using namespace std;
int main (){
    long long i, sbor = 0;
    bool promenihLiNesho = false;
    char chislo[105];
    cin >> chislo;
    long long dyljina = strlen(chislo);
    for(i=0;i<dyljina;i++){
        sbor += chislo[i] - '0';
    }
    //cout<<sbor%3<<endl;
    for(i=0;i<dyljina;i++){
        sbor -= chislo[i] - '0';
        if(chislo[i]-'0'<9 - sbor%3){
            chislo[i] = 9-sbor%3+'0';
            promenihLiNesho = true;
            break;
        }
        sbor += chislo[i] - '0';
        //cout<<chislo[i]<<" "<<sbor%3<<endl;
        //cout<<"predlagam: "<<9 - sbor%3<<endl;
    }
    if(!promenihLiNesho){
        if(sbor%3==0){
            chislo[dyljina-1] -= 3;
        }else{
            chislo[dyljina-1] -= sbor%3;
        }
    }
    cout<<chislo;
    return 0;
}
