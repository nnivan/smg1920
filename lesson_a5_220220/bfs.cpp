#include <iostream>
using namespace std;
char pole[1024][1024];
int xS[1024*1024];
int yS[1024*1024];
int brS = 0;
int n, er, ec;

void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << pole[i][j];
        }
        cout<<endl;
    }
}

int main (){
    bool slojihLiS = true;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>pole[i];
        for(int j = 0; j < n; j++){
            if(pole[i][j] == 'e'){
                pole[i][j] = '.';
                er = i;
                ec = j;
            }
            if(pole[i][j] == 's'){
                xS[brS] = i;
                yS[brS] = j;
                brS++;
            }
        }
    }
    for(int i = 0;i < brS;){
        int r, c;
        r = xS[i];
        c = yS[i];
        i++;
        cout << r<< " "<<c<<endl;
        if(r < n - 1 && pole[r+1][c]=='.'){
            pole[r+1][c] = 's';
            xS[brS] = r+1;
            yS[brS] = c;
            brS++;
        }
        if(r > 0 && pole[r-1][c]=='.'){
            pole[r-1][c] = 's';
            xS[brS] = r-1;
            yS[brS] = c;
            brS++;
        }
        if(c < n - 1 && pole[r][c+1]=='.'){
            pole[r][c+1] = 's';
            xS[brS] = r;
            yS[brS] = c+1;
            brS++;
        }
        if(c > 0 && pole[r][c-1]=='.'){
            pole[r][c-1] = 's';
            xS[brS] = r;
            yS[brS] = c-1;
            brS++;
        }
        print();
        cout << endl << "-----" << endl << endl << endl;
    }
    return 0;
}
/**
10
..........
..........
..........
..........
..........
....s.....
..........
..........
..........
..........
*/
