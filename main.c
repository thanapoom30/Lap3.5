#include <stdio.h>

int main()
{
    float B, H;
    printf("Input base : ");
    scanf("%f", &B);
    printf("Input height : ");
    scanf("%f", &H);
    printf("Area is %0.2f", 0.5 * B * H);
    return 0;
}