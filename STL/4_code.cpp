#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;
    // insert the element in the q
    q.push(10);
    q.push(30);
    q.push(20);
    q.push(5);
    q.push(1);

    q.pop();

    return 0;
}