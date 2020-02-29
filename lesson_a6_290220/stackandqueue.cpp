#include <iostream>
#include <stack>
#include <queue>
using namespace std;
//int s[1024], ssize = 0;
stack<int> s;
queue<int> q;
int main (){
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    cout << "-----" << endl;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}

    /// s[ssize] = 5; /// s.push(5);
    /// ssize++;      ///
    /// s[ssize] = 6; /// s.push(6);
    /// ssize++;      ///
    /// s[ssize] = 7; /// s.push(7);
    /// ssize++;      ///
    /// s[ssize] = 8; /// s.push(8);
    /// ssize++;      ///
    /// cout << s[ssize - 1] << endl; /// cout << s.top();
    /// ssize--; /// s.pop();
    /// cout << s[ssize - 1] << endl; /// cout << s.top();
    /// ssize--; /// s.pop();
    /// s[ssize] = 3; /// s.push(8);
    /// ssize++;      ///
    /// s[ssize] = 4; /// s.push(8);
    /// ssize++;      ///
    /// cout << s[ssize - 1] << endl; /// cout << s.top();
    /// ssize--; /// s.pop();
    /// cout << s[ssize - 1] << endl; /// cout << s.top();
    /// ssize--; /// s.pop();
    /// cout << s[ssize - 1] << endl; /// cout << s.top();
    /// ssize--; /// s.pop();
    /// cout << s[ssize - 1] << endl; /// cout << s.top();
    /// ssize--; /// s.pop();
