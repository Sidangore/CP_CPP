#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5;
    vector<int> v1; // Size is not defined
    // vector<int> v2 (n);
    // vector<int> v3 (n, 0);

    // Add element in the vector
    v1.push_back(1);

    // Size of the vector
    v1.size();

    v1.push_back(2);

    // Remove value from the last
    v1.pop_back();

    // Insert valu e at the front using iterators
    // v1.begin(); // Points to the first element of the vector
    // v1.end(); // Points to the virtually last element of the vector
    v1.insert(v1.begin(), 10);

    // Erase from a particular position
    v1.erase(v1.begin() + 1);

    // Clear the whole vector
    v1.clear();

    // Print the vector
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    
    return 0;
}