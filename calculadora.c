#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>

float add(float a, float b)
{
    return a+b;
}

float subtr(float a, float b)
{
    return a-b;
}

float divi(float a, float b)
{
    return a/b;
}

float multip(float a, float b)
{
    return a*b;
}

int main (int argc, char** argv)
{
    char carac = argv[1][0];
	float a=atof(argv[2]);
	float b=atof(argv[3]);
    printf("%c\n %f\n %f\n", carac, a, b);
    switch (carac)
	{
        case '+':
            printf("The result of the addition is: %.3f\n", add(a,b));
            break;

        case '-':
            printf("The result of the subtraction is: %.3f\n", subtr(a,b));
            break;

        case '/':
            printf("The result of the division is: %.3f\n", divi(a,b));
            break;

        case '*':
            printf("The result of the multiplication is: %.3f\n", multip(a,b));
            break;

        default:
            printf("Syntax error");
            break;
	}
}
