#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    long long N = atol(argv[1]);
    long double res = 0;
    long double x = 0.5;
    for (long long n = 1; n <= N; n++) {
        res += pow(-1, n + 1) * pow(x, n) / n;
    }
    printf("%.30Lf\n", res);
}
