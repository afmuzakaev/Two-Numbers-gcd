#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int A, B;
    std::cout << "Enter two positive integers A and B: ";
    std::cin >> A >> B;

    int result = gcd(A, B);
    std::cout << "GCD of " << A << " and " << B << " is " << result << std::endl;

    return 0;
}
