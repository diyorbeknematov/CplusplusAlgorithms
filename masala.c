#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int generatePrime() {
    int num;
    do {
        num = rand() % 100 + 1;
    } while (!isPrime(num));
    return num;
}

int eNiTanlash(int phi) {
    int e;
    do {
        e = rand() % phi + 1;
    } while (!areCoprime(e, phi));
    return e;
}

int dNiHisoblash(int e, int phi) {
    int d = 1;
    while ((d * e) % phi != 1) {
        ++d;
    }
    return d;
}

int shifrlash(int matn, int e, int n) {
    int shifr = 1;
    for (int i = 0; i < e; ++i) {
        shifr = (int)(shifr * matn) % n;
    }
    return shifr;
}

int deShifrlash(int shifr, int d, int n) {
    int deshifr = 1;
    for (int i = 0; i < d; ++i) {
        deshifr = (deshifr * shifr) % n;
    }
    return deshifr;
}

int main() {
    srand(time(NULL));
    int p, q, n, phiN, e, d;

    printf("tub son p = ");
    scanf("%d", &p);
    printf("tub son q = ");
    scanf("%d", &q);

    if (!isPrime(p) || !isPrime(q)) {
        printf("p va q ga tub son kiriting\n");
        return 1;
    }

    n = p * q;
    phiN = (p - 1) * (q - 1);

    e = eNiTanlash(phiN);
    d = dNiHisoblash(e, phiN);

    printf("Tub sonlar (p, q): %d, %d\n", p, q);
    printf("n va phi(n): %d, %d\n", n, phiN);
    printf("Ochiq Kalit (e, n): %d, %d\n", e, n);
    printf("Yopiq Kalit (d, n): %d, %d\n", d, n);

    char matn[100];
    printf("Matn kiriting: ");
    getchar(); // Bo'sh qatorni o'qib tashlash
    scanf("%[^\n]", matn);

    printf("Matn: %s\n", matn);

    int shifr[100];
    printf("Shifr: ");
    for (int i = 0; i < strlen(matn); ++i) {
        shifr[i] = shifrlash(matn[i], e, n);
        printf("%d ", shifr[i]);
    }
    printf("\n");

    char deshifr[100];
    printf("Deshifr: ");
    for (int i = 0; i < strlen(matn); ++i) {
        deshifr[i] = deShifrlash(shifr[i], d, n);
        printf("%c", deshifr[i]);
    }
    printf("\n");

    return 0;
}
