#include <iostream>
#include <queue>
using namespace std;
char pole[1024][1024];
// int xS[1024*1024];
// int yS[1024*1024];
//int brS = 0;
queue<int> qX, qY;
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
                qX.push(i);
                qY.push(j);
                // xS[brS] = i;
                // yS[brS] = j;
                // brS++;
            }
        }
    }
    while(!qX.empty()){
        int r, c;
        r = qX.front();
        c = qY.front();
        // r = xS[i];
        // c = yS[i];
        qX.pop();
        qY.pop();
        // i++;
        cout << r<< " "<<c<<endl;
        if(r < n - 1 && pole[r+1][c]=='.'){
            pole[r+1][c] = 's';
            qX.push(r+1);
            qY.push(c);
            // xS[brS] = r+1;
            // yS[brS] = c;
            // brS++;
        }
        if(r > 0 && pole[r-1][c]=='.'){
            pole[r-1][c] = 's';
            qX.push(r-1);
            qY.push(c);
            // xS[brS] = r-1;
            // yS[brS] = c;
            // brS++;
        }
        if(c < n - 1 && pole[r][c+1]=='.'){
            pole[r][c+1] = 's';
            qX.push(r);
            qY.push(c+1);
            // xS[brS] = r;
            // yS[brS] = c+1;
            // brS++;
        }
        if(c > 0 && pole[r][c-1]=='.'){
            pole[r][c-1] = 's';
            qX.push(r);
            qY.push(c-1);
            // xS[brS] = r;
            // yS[brS] = c-1;
            // brS++;
        }
        print();
        cout << endl << "-----" << endl << endl << endl;
    }
    cout << (pole[er][ec] == 's') << endl;
    return 0;
}
/**
10
..........
..........
..######..
.#...e.#..
.#.....#..
.#..0..#..
.#.....#..
.#.....#..
.#######..
..........
*/
