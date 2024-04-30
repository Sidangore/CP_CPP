#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);

    stack.pop();
    stack.push(25);

    cout << stack.size() << endl;

    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}