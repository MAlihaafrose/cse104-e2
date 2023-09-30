#include<stdio.h>
int main()
{   int number, hour;
    float amount, SALARY;
    scanf("%d", &number);
    scanf("%d", &hour);
    scanf("%f", &amount);
    SALARY = hour*amount;
    printf("NUMBER = %d\n", number);
printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}

