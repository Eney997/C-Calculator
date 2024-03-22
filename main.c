#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2;
    char op;

    printf("Enter your first number: ");
    scanf("%lf",&num1);

    printf("Enter your second number: ");
    scanf("%lf",&num2);

    printf("Enter your operator: ");
    scanf(" %c",&op);

    if(op=='+'){
        printf("%f",num1+num2);
    }else if(op=='-'){
        printf("%f",num1-num2);
    }else if(op=='*'){
        printf("%f",num1*num2);
    }else if(op=='/'){
        printf("%f",num1/num2);
    }else{
        printf("Error 404");
    }

    return 0;

}
