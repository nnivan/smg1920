#include <iostream>
#include <algorithm>
using namespace std;
bool naredba(int a, int b){
    return a > b;
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
