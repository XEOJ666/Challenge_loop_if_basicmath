#include<stdio.h>
#include<cmath>
int main()
{
    double	 i, b, x = 0, xsqr = 0, c, d, e;
    scanf_s("%lf %lf", &i, &b);
    int n = abs(i - b) + 1;
    if (i == b)
    {
        printf("Error"); 
        return 0;
    }
    else if (i <= b)
    {
        for (i = i;i <= b;i++)
        {
            printf("%.f ", i);
            x += i;
            xsqr += pow(i, 2);
        }
    }
    else if (i >= b)
    {
        for (i = i;i >= b;i--)
        {
            printf("%.f ", i);
            x += i;
            xsqr += pow(i, 2);
        }
    }
    c = (n * xsqr - pow(x, 2));
        d = (n * (n - 1));
        e = sqrt(c / d);
        printf("\nAverage = %.1f\n", x / n);
        printf("SD = %.2f", (e));
    return 0;
}