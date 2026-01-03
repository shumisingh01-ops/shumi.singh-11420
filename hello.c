#include <stdio.h>

void printNumbers(int n);
void printEven(int n);
void printOdd(int n);

int main() {
    int choice, n;

    
    printf("----- MENU -----\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        printf("Enter value of N: ");
        scanf("%d", &n);
    }

    // Switch case for menu selection 
    switch (choice) {
        case 1:
            printNumbers(n);
            break;

        case 2:
            printEven(n);
            break;

        case 3:
            printOdd(n);
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function to print numbers from 1 to N
void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

//  Function to print even numbers up to N 
void printEven(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}

// Function to print odd numbers up to N 
void printOdd(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}
