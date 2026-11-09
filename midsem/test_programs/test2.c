#include <stdio.h>

int main()
{
    int w = 0, x = 2.5, y = 5, z = 3, r, s = 4, t = 5, u = -3;
    double a = 2.36, b = 3.19, c = 3.0, d = 2.91726;
    printf("Expr_1 = %d\n", (int)(c * y / z + y / z * c));
    printf("Expr_2 = %lf\n", x - s * t * - c - u);
    printf("Expr_3 = %f\n", (float)(x + y < z + w && a > b - 17 * x || ! x < 5));
    return 0;
}