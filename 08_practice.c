# include <stdio.h>

int main()
{
    // Simple Intrest Calculator
    int princ, rate, time;

    printf("Enter Principal> ");
    scanf("%d", &princ);
    
    printf("Enter Rate> ");
    scanf("%d", &rate);

    printf("Enter Time> ");
    scanf("%d", &time);

    float a = princ*rate*time;

    printf("Simple Intrest is %f", a/100);

    return 0;
}