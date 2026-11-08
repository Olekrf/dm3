#include <iostream>

typedef __int128_t int128;

int128 factorial(int n) {
    int128 result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int128 C(int n, int r) {
    int128 result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

int main() {
    long long t1 = 3 * C(12, 2) * C(12, 2) * C(24, 2);
    long long t2 = 3 * C(12, 2) * (C(12, 1) * C(24, 1)) * (C(12, 1) * C(24, 1));
    long long res = t1 + t2;

    std::cout << res << std::endl;

    return 0;
}
