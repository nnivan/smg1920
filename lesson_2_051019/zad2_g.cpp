#include <iostream>
#include <algorithm>
using namespace std;
bool naredba(int x, int y){
    // pomislete i razberete kak raboti tova !!!
    // moje da sloja obqsnenie posle :P
    return x%2 == 0 && y%2 == 1;
}
int main (){
    int arr[1024], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, naredba);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}

/*
10
5 6 7 4 0 8 1 2 9 3
*/
