#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
    return x + y;
}

int main()
{
    float x0, y0, xn, h, x, y, y_predict, y_correct;
    int i, n;

    printf("Enter initial values x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter step size h: ");
    scanf("%f", &h);

    printf("Enter calculation point xn: ");
    scanf("%f", &xn);

    n = (xn - x0) / h;
    x = x0;
    y = y0;

    printf("\n------ MODIFIED EULER METHOD ------\n");
    printf("Step\t   x\t\t   y\n");
    printf("0\t %.4f\t %.4f\n", x, y);

    for (i = 1; i <= n; i++)
    {
        y_predict = y + h * f(x, y);
        y_correct = y + (h / 2.0) * (f(x, y) + f(x + h, y_predict));

        x = x + h;
        y = y_correct;

        printf("%d\t %.4f\t %.4f\n", i, x, y);
    }

    printf("\nFinal value at x = %.4f is y = %.4f\n", x, y);

    return 0;
}
