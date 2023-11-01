#include <stdio.h>

int eulerPhi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}

int main() {
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);
    int phi = eulerPhi(n);
    printf("Функция Эйлера (phi) для числа %d равна %d\n", n, phi);
    return 0;
}
