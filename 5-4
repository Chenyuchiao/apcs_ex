#include <stdio.h>
int main() {
    char operator1;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator1);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    #if 1
    if(operator1=='+'){
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    }else if(operator1=='-'){
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    }else if(operator1=='*'){
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    }else if(operator1=='/'){
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    }else{
        printf("Error! operator is not correct");
    }
    #else
    switch (operator1) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
    #endif
    return 0;
}
