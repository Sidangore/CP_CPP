#include <iostream>
#include <set>
using namespace std;
/*
    insert()
    empty()
    find()
    size()
    count()

*/
int main() {
    set<int> set;

    set.insert(5);
    set.insert(10);
    set.insert(7);
    set.insert(5);

    for (auto i: set) {
        cout << i << " ";
    }
    cout << endl;
    cout << set.size();

    cout << set.empty();
    
    return 0;
}