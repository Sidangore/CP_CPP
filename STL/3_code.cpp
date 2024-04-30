#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();        
    }

    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();
    cout << endl;

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();        
    }

    cout << "\n" << q.size() << endl;

    return 0;
}
