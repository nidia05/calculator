//nfino22
#include <stdio.h>
#include <math.h>

double avg(int n) {
    double sum = 0, a;
    printf("Enter the numbers number: ");

    for (int i = 0; i < n; i++) {
        scanf("%lf", &a);
        sum += a;
    }

    return sum / n;
}


float sum(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float square_root(float a) {
    return sqrt(a);
}

float power(float a, int m) {
    return pow(a, m);
}

int main() {
    float a, b;
    int operation;



    printf("Enter the number of operation to perform: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Find the square root\n");
    printf("6. Raise to power\n");
    printf("7. Calculate the average\n");

    scanf("%d", &operation);


    if (operation==1 || operation==2 || operation==3 || operation==4 || operation==6 )
    {
    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);
    }
    else if (operation==5)
    {
    printf("Enter the number: ");
    scanf("%f", &a);
    }


    if (operation == 1)
        printf("%.2f + %.2f = %.2f\n", a, b, sum(a,b));
    else if (operation == 2)
       printf("%.2f - %.2f = %.2f\n", a, b, sub(a,b));
    else if (operation == 3)
        printf("%.2f * %.2f = %.2f\n", a, b, multiply(a,b));
    else if (operation == 4)
        if (b == 0)
            printf("Cannot divide by zero.\n");
        else
            printf("%.2f / %.2f = %.2f\n", a, b, divide(a,b));
    else if (operation == 5)
        if (a < 0)
            printf("Cannot find square root of a negative number.\n");
        else
            printf("Square root of %.2f = %.2f\n", a, square_root(a));
    else if (operation == 6)
        printf("%.2f ^ %d = %.2f\n", a, (int)b, power(a,b));
    else if (operation==7)
    {
        int n;
        printf("How many numbers do you want to average? ");
        scanf("%d",&n);
        printf("The average is: %.2lf\n", avg(n));
    }
    else
        printf("Invalid operation.\n");

    return 0;
}
