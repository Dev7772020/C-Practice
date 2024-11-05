# include <stdio.h>

int main()
{
    int x , y;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Enter the value of y\n");
    scanf("%d", &y);
    int z = x + y;
    int w = x*y;
    if(x>y){
        printf("Product of numbers is %d" , w);
    }
    else{
        printf("Sum of the number is %d" , z);
    }
    return 0;
}