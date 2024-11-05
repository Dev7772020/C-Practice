# include <stdio.h>

int main()
{
    // area and circumference of circle
    int radius;

    printf("Enter the radius of circle\n");
    scanf("%d" , &radius);

    float pie = 3.14;
    printf("Area of this circle is %f", pie*radius*radius);
    printf(" sq units");
    printf(" and Circumference of circle is %f", 2*pie*radius);
    printf(" units");
    return 0;
}