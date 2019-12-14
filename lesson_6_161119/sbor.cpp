#include<iostream>
#include<cstring>
using namespace std;
char a[1024], b[1024], c[1024];
int da, db, dc;

int main(){
    cin >> a >> b;
    da = strlen(a);
    db = strlen(b);
    for(int i=0;i<da/2;i++){
        swap(a[i], a[da-i-1]);
    }
    for(int i=0;i<db/2;i++){
        swap(b[i], b[db-i-1]);
    }
    if(db < da){
        for(int i = db; i < da; i++){
            b[i] = '0';
        }
        db = da;
        b[db] = '\0';
    }
    if(da < db){
        for(int i = da; i < db; i++){
            a[i] = '0';
        }
        da = db;
        a[da] = '\0';
    }
    bool prehvyrlqne = false;
    for(int i=0;i<da;i++){
        int result = (a[i] - '0') + (b[i] - '0');
        if(prehvyrlqne){
            result += 1;
        }
        prehvyrlqne = false;
        if(result>=10){
            prehvyrlqne = true;
        }
        c[i] = '0' + result%10;
    }
    dc = da;
    if(prehvyrlqne){
        c[dc]='1';
        dc++;
        c[dc]='\0';
    }
    for(int i = dc-1;i>=0;i--){
        cout << c[i];
    }
    cout<<endl;
    return 0;
}
