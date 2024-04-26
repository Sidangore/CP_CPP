#include <iostream>

void printBoxPattern (int n) {
    int side = (n*2) - 1;


    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            int row = 1 + (std::min(std::min(i, j), std::min(side - 1 - i, side - 1 -j)));
            std::cout << row << " ";
        }
        std::cout << std::endl;
    }   
}


int main() {
    int t; std::cin >> t;

    while (t-- > 0) {
        int n;
        std::cin >> n;

        printBoxPattern(n);
    }

    return 0;
}