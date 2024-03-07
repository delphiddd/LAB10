#include <stdio.h>
#include <math.h>
#include <complex.h>

void quadratic_eq(int a, int b, int c, float _Complex *x1, float _Complex *x2) {
    float discriminant = pow(b, 2) - 4 * a * c;
    *x1 = (-b + csqrt(discriminant)) / (2 * a);
    *x2 = (-b - csqrt(discriminant)) / (2 * a);
}


int main() {
    int a, b, c;
    float _Complex x1, x2;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    quadratic_eq(a, b, c, &x1, &x2);

    if (cimag(x1) == 0 && cimag(x2) == 0) {
        printf("x1 = %.3f\n", creal(x1));
        printf("x2 = %.3f\n", creal(x2));
    } else {
        printf("x1 = %.3f%+.3fi\n", creal(x1) , cimag(x1));
        printf("x2 = %.3f%+.3fi\n", creal(x2) , cimag(x2));
    }
}
