#include <iostream>

class Solution {
    public:
        int adjacentPairs(int n, int a[]) {
            int count = 0;
            
            for (int i = 0; i < n - 1; i++) {
                if (a[i + 1] == (a[i] + 1)) {
                    count++;
                }
            }

            return count;
        }
};

int main() {
    int t; std::cin >> t;

    while (t--) {
        int n; std::cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        Solution o;
        std::cout << o.adjacentPairs(n, a) << std::endl;        
    }

    return 0;
}