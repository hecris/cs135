#include <iostream>

int main() {
    int n;
    int sum = 0;
    while (std::cin >> n) {
        sum += n;
    }
    std::cout << sum << std::endl;
    return 0;
}
