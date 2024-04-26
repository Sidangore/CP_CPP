#include <iostream>
#include <vector>

void alternateNumbers(std::vector<int>& a) {
    std::vector<int> positive;
    std::vector<int> negative;

    for (int n: a) {
        if (n >= 0) {
            positive.push_back(n);
        } else {
            negative.push_back(n);
        }
    }

    a.clear();
    auto p_idx = positive.begin();
    auto n_idx = negative.begin();

    while (p_idx != positive.end() || n_idx != negative.end()) {
        if (p_idx != positive.end()) {
            a.push_back(*p_idx++);
        } 
        if (n_idx != negative.end()) {
            a.push_back(*n_idx++);
        }
    }    

    for (int n: a) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {
    int t; 
    std::cin >> t;

    while (t-- > 0) {
        int n; 
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        alternateNumbers(a);
    }

    return 0;
} 