# include <stdio.h>

int main()
{
    // Celsius to fahrenheit conversion
    int tempC ;

    printf("Enter the Temperature in Celcius> ");
    scanf("%d", &tempC);

    printf("Temperature in Fahrenheit is %f", tempC*1.8 + 32);

    return 0;
}