#include <stdio.h>

int main()
{
    // Volume of a cylinder
    int radius, height;

    printf("Enter the radius of cylinder\n");
    scanf("%d", &radius);

    printf("Enter the height of cylinder\n");
    scanf("%d", &height);

    float pie = 3.14;
    printf("Volume of this cylinder is %f", pie * radius * radius * height);
    printf(" cubic units");
    return 0;
}