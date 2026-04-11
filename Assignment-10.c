/*Assignment 10:
Write a program in C to simulate a simple calculator that performs basic arithmetic operations such as addition, subtraction, 
multiplication, and division. The calculator should also perform special operations like computing xʸ (power) and x! (factorial).*/

int main()
{
    int choice;
    float a, b, result;
    int i, n, fact = 1;
    int base, exp, power = 1;

    printf("\n--- Simple Calculator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n Enter two numbers:=");
        scanf("%f %f", &a, &b);
        result = a + b;
        printf("Result = %.2f", result);
        break;

    case 2:
        printf("\n Enter two numbers:=");
        scanf("%f %f", &a, &b);
        result = a - b;
        printf("Result = %.2f", result);
        break;

    case 3:
        printf("\n Enter two numbers:=");
        scanf("%f %f", &a, &b);
        result = a * b;
        printf("Result = %.2f", result);
        break;

    case 4:
        printf("\n Enter two numbers:=");
        scanf("%f %f", &a, &b);
        if (b == 0)
            printf("Error: Division by zero not allowed");
        else
        {
            result = a / b;
            printf("Result = %.2f", result);
        }
        break;

    case 5:
        printf("\n Enter two numbers:=");
        scanf("%d %d", &base, &exp);
        for (i = 1; i <= exp; i++)
            power = power * base;
        printf("Result = %d", power);
        break;

    case 6:
        printf("\n Enter a number:=");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
            fact = fact * i;
        printf("Result = %d", fact);
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}

/*OUTPUT:
--- Simple Calculator ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Power (x^y)
6. Factorial (x!)

 Enter your choice: 5

 Enter two numbers:=2 4
 Result = 16


 Enter your choice: 6

 Enter a number:=5
 Result = 1208*/
