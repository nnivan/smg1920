#include <iostream>
#include <stack>
using namespace std;
int main (){
    stack<char> s, output;
    char x;
    while(cin>>x){
        if(!s.empty() && s.top() == x) s.pop();
        else s.push(x);
    }
    while(!s.empty()){
        output.push(s.top());
        s.pop();
    }
    while(!output.empty()){
        cout << output.top();
        output.pop();
    }
    cout << endl;
    return 0;
}
