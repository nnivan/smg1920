#include <iostream>
#include <algorithm>
using namespace std;
bool naredba(int x, int y){
    int brx = 0, bry = 0;
    if(x == 0){
        brx = 1;
    }
    if(y == 0){
        bry = 1;
    }
    while(x > 0){
        brx++;
        x/=10;
    }
    while(y > 0){
        bry++;
        y/=10;
    }
    return brx > bry;
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
