#include <stdio.h>

float f(float x, float y)
{
    return x + y;
}

int main()
{
    float x, y, h, k1, k2, xn;
    int n, i;

    printf("Enter x0: ");
    scanf("%f", &x);

    printf("Enter y0: ");
    scanf("%f", &y);

    printf("Enter step size h: ");
    scanf("%f", &h);

    printf("Enter final x: ");
    scanf("%f", &xn);

    n = (int)((xn - x) / h);

    printf("\nx\t\ty\n");
    printf("%.4f\t%.4f\n", x, y);

    for (i = 0; i < n; i++)
    {
        k1 = h * f(x, y);
        k2 = h * f(x + h, y + k1);

        y = y + (k1 + k2) / 2;
        x = x + h;

        printf("%.4f\t%.4f\n", x, y);
    }

    return 0;
}
