#include <stdio.h>
#include <math.h>
#define MAXZISE 100
/* calculate standard deviation */

int main()
{
    int i, n;
    float value[MAXZISE], deviation, sum, sumsqr, mean, variance, stddeviation;
    sum = sumsqr = n = 0;
    printf("Input values:  input -1 to end");
    for (i = 1; i < MAXZISE; i++)
    {
        scanf("%f", &value[i]);
        if (value[i] == -1)
            break;
        sum += value[i];
        n += 1;
    }
    mean = sum / (float)n;
    for (i = 1; i <= n; i++)
    {
        deviation = value[i] - mean;
        sumsqr += deviation * deviation;
    }
    variance = sumsqr / (float)n;
    stddeviation = sqrt(variance);
    printf("Number of items: %d", n);
    printf("Mean %f", mean);
    printf("Standard deviation %f", stddeviation);
    return 0;
}
