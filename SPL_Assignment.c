#include <stdio.h>

// Function to display student name and ID
void displayStudentInfo() {
    printf("Name: MD. Jahidul Islam\n");
    printf("Student ID: CSE2501034327\n");
    printf("------------------------\n");
}

// Function to display the main menu
void displayMenu() {
    printf("\n========= MENU =========\n");
    printf("1. Print message \"Have a Nice Day!\"\n");
    printf("2. Print first 10 natural numbers\n");
    printf("3. Print first 10 even numbers\n");
    printf("4. Print first 10 odd numbers\n");
    printf("5. Print factorial of 5\n");
    printf("6. Print sum of two numbers\n");
    printf("7. Print square of a number\n");
    printf("8. Print cube of a number\n");
    printf("9. Return sum of two numbers\n");
    printf("10. Return square of a number\n");
    printf("11. Print sum of series 1 to 10\n");
    printf("12. Series summation (1+2+...+100)\n");
    printf("13. Return sum of first 10 natural numbers\n");
    printf("14. Print sum of digits of 12345\n");
    printf("15. Return sum of digits of a number\n");
    printf("16. Return factorial of a number\n");
    printf("17. Print weekday name\n");
    printf("18. Print month name\n");
    printf("19. Check gender\n");
    printf("20. Traffic light action\n");
    printf("21. Check even or odd (switch)\n");
    printf("22. Check odd or even (alternative)\n");
    printf("23. Check vowel or consonant\n");
    printf("24. Check character type\n");
    printf("25. Print first 10 Fibonacci numbers\n");
    printf("26. Check leap year\n");
    printf("27. Check if number is prime\n");
    printf("28. Return if number is prime\n");
    printf("29. Basic calculator\n");
    printf("30. Days in a month\n");
    printf("0. Exit\n");
    printf("========================\n");
    printf("Enter your choice: ");
}

// 1. Print message
void printMessage() {
    printf("Have a Nice Day!\n");
}

// 2. Print first 10 natural numbers
void printNaturalNumbers() {
    for(int i = 1; i <= 10; i++) printf("%d ", i);
    printf("\n");
}

// 3. Print first 10 even numbers
void printEvenNumbers() {
    for(int i = 1; i <= 10; i++) printf("%d ", 2 * i);
    printf("\n");
}

// 4. Print first 10 odd numbers
void printOddNumbers() {
    for(int i = 0; i < 10; i++) printf("%d ", 2 * i + 1);
    printf("\n");
}

// 5. Print factorial of 5
void printFactorialOf5() {
    int fact = 1;
    for(int i = 1; i <= 5; i++) fact *= i;
    printf("Factorial of 5 is: %d\n", fact);
}

// 6. Print sum of two numbers
void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

// 7. Print square of a number
void printSquare(int n) {
    printf("Square: %d\n", n * n);
}

// 8. Print cube of a number
void printCube(int n) {
    printf("Cube: %d\n", n * n * n);
}

// 9. Return sum of two numbers
int getSum(int a, int b) {
    return a + b;
}

// 10. Return square of a number
int getSquare(int n) {
    return n * n;
}

// 11. Print sum of series 1 to 10
void printSeriesSum() {
    int sum = 0;
    for(int i = 1; i <= 10; i++) sum += i;
    printf("Sum of series 1 to 10: %d\n", sum);
}

// 12. Series 1+2+...+100
void sumTo100() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) sum += i;
    printf("Sum = %d\n", sum);
}

// 13. Return sum of first 10 natural numbers
int sumFirst10Naturals() {
    int sum = 0;
    for(int i = 1; i <= 10; i++) sum += i;
    return sum;
}

// 14. Print sum of digits of 12345
void printDigitSum() {
    int n = 12345, sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits of 12345: %d\n", sum);
}

// 15. Return sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 16. Return factorial of a number
int getFactorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) fact *= i;
    return fact;
}

// 17. Weekday name
void printWeekdayName() {
    int day;
    printf("Enter weekday number (1 to 7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Saturday\n"); break;
        case 2: printf("Sunday\n"); break;
        case 3: printf("Monday\n"); break;
        case 4: printf("Tuesday\n"); break;
        case 5: printf("Wednesday\n"); break;
        case 6: printf("Thursday\n"); break;
        case 7: printf("Friday\n"); break;
        default: printf("Invalid Number\n");
    }
}

// 18. Month name
void printMonthName() {
    int month;
    printf("Enter a number: ");
    scanf("%d", &month);
    switch (month) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid input!\n");
    }
}

// 19. Check gender
void checkGender() {
    char g;
    printf("Enter Gender (M/m for Male and F/f for Female): ");
    scanf(" %c", &g);
    switch (g) {
        case 'M': case 'm': printf("Male\n"); break;
        case 'F': case 'f': printf("Female\n"); break;
        default: printf("Error!\n");
    }
}

// 20. Traffic light action
void trafficLight() {
    char color;
    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &color);
    switch (color) {
        case 'r': case 'R': printf("Stop\n"); break;
        case 'g': case 'G': printf("Go\n"); break;
        case 'y': case 'Y': printf("Caution\n"); break;
        default: printf("Error!\n");
    }
}

// 21. Check even or odd (switch)
void checkEvenOddSwitch() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n % 2) {
        case 0: printf("%d is Even\n", n); break;
        case 1:
        case -1: printf("%d is Odd\n", n); break;
    }
}

// 22. Check odd or even (alternative)
void checkEvenOddAlt() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("%d is even\n", n);
    else printf("%d is odd\n", n);
}

// 23. Vowel or consonant
void vowelOrConsonant() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch (ch) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("%c is a Vowel\n", ch); break;
        default:
            printf("%c is a Consonant\n", ch);
    }
}

// 24. Character type
void checkCharType() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("The character '%c' is an Alphabet.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("The character '%c' is a Digit.\n", ch);
    else
        printf("The character '%c' is a Special Character.\n", ch);
}

// 25. Print first 10 Fibonacci numbers
void printFibonacci() {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for(int i = 3; i <= 10; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

// 26. Leap year check
void checkLeapYear() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is NOT a Leap Year.\n", year);
}

// 27. Check if number is prime
void isPrime(int n) {
    int flag = 1;
    if(n <= 1) flag = 0;
    else {
        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    printf("%d is %s prime.\n", n, flag ? "" : "not");
}

// 28. Return if number is prime
int isPrimeReturn(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

// 29. Basic calculator
void basicCalculator() {
    int a, b;
    char op;
    printf("Enter First Number: "); scanf("%d", &a);
    printf("Enter (+, -, *, /, %%): "); scanf(" %c", &op);
    printf("Enter Second Number: "); scanf("%d", &b);
    switch(op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/':
            if (b != 0) printf("Result: %d\n", a / b);
            else printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0) printf("Result: %d\n", a % b);
            else printf("Error: Division by zero\n");
            break;
        default: printf("Invalid Operator\n");
    }
}

// 30. Days in month
void daysInMonth() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n"); break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("29 days (Leap Year)\n");
            else
                printf("28 days\n");
            break;
        default: printf("Invalid month number!\n");
    }
}

// Main Program
int main() {
    displayStudentInfo(); // Display name and ID at the start
    int choice, a, b, n;

    while(1) {
        displayMenu(); // Display the menu
        scanf("%d", &choice);

        switch(choice) {
            case 1: printMessage(); break;
            case 2: printNaturalNumbers(); break;
            case 3: printEvenNumbers(); break;
            case 4: printOddNumbers(); break;
            case 5: printFactorialOf5(); break;
            case 6:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printSum(a, b);
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%d", &n);
                printSquare(n);
                break;
            case 8:
                printf("Enter a number: ");
                scanf("%d", &n);
                printCube(n);
                break;
            case 9:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Returned Sum: %d\n", getSum(a, b));
                break;
            case 10:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Returned Square: %d\n", getSquare(n));
                break;
            case 11: printSeriesSum(); break;
            case 12: sumTo100(); break;
            case 13:
                printf("Returned Sum of First 10 Natural Numbers: %d\n", sumFirst10Naturals());
                break;
            case 14: printDigitSum(); break;
            case 15:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Returned Sum of Digits: %d\n", sumOfDigits(n));
                break;
            case 16:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Returned Factorial: %d\n", getFactorial(n));
                break;
            case 17: printWeekdayName(); break;
            case 18: printMonthName(); break;
            case 19: checkGender(); break;
            case 20: trafficLight(); break;
            case 21: checkEvenOddSwitch(); break;
            case 22: checkEvenOddAlt(); break;
            case 23: vowelOrConsonant(); break;
            case 24: checkCharType(); break;
            case 25: printFibonacci(); break;
            case 26: checkLeapYear(); break;
            case 27:
                printf("Enter a number: ");
                scanf("%d", &n);
                isPrime(n);
                break;
            case 28:
                printf("Enter a number: ");
                scanf("%d", &n);
                if (isPrimeReturn(n))
                    printf("Returned: Prime\n");
                else
                    printf("Returned: Not Prime\n");
                break;
            case 29: basicCalculator(); break;
            case 30: daysInMonth(); break;
            case 0:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
