#include <iostream>
#include <algorithm>
using namespace std;
int x[1024], y[1024], index[1024];
bool cmp(int i, int j){
    if(x[i] != x[j]){
        return x[i] < x[j];
    }
    return y[i] < y[j];
}
int main () {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        index[i] = i;
        cin>>x[index[i]]>>y[index[i]];
    }
    sort(index, index+n, cmp);
    cout<<"---"<<endl;
    for(int i = 0; i < n; i++){
        cout<<x[index[i]]<<" "<<y[index[i]]<<endl;
    }
    return 0;
}
/**
5
1 2
1 3
1 0
2 3
2 1
---
1 0
1 2
1 3
2 1
2 3
*/
