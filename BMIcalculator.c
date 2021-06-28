#include <stdlib.h>
#include <stdio.h>

int main()
{

    float a = 0;
    float b = 0;
    float c;

    puts("hello please input your height");
    scanf("%f", &a);

    if (a > 100)
    {

        a = a / 100;
    }

    puts("hello please input your weight");

    scanf("%f", &b);

    if (b > 1000)
    {

        b = b / 1000;
    }

    c = b / (a * a);

    printf("your BMI is %f", c);

    return 0;
}