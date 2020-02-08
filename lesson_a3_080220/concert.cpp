#include <iostream>
using namespace std;
int brd, brk, komp[10005], reshenie[10005], vreme, tekushtDiskove = 0;
int l, r, m;
int main (){
    cin>>brd>>brk;
    for(int i = 0; i < brk; i++){
        cin>>komp[i];
    }
    l = 0;
    r = komp[0]*brd+1;
    m = (l+r)/2;
    while(l != m){
        vreme = m;
        tekushtDiskove = 0;
        for(int i = 0; i < brk; i++){
            tekushtDiskove += vreme/komp[i];
        }
        if(tekushtDiskove < brd){
            l = m;
        }else{
            r = m;
        }
        m = (l+r)/2;
        cout << vreme << " - " << tekushtDiskove << endl;
        cout << l << " " << m << " " << r << endl << endl;
    }
    cout << vreme;
}
