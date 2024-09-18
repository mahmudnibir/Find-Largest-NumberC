#include <stdio.h>

int main() {
    int a, b, c, d, largest;

    // Taking input from the user
    printf("Enter four numbers:\n");
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);
    printf("Enter number d: ");
    scanf("%d", &d);

    // Assuming the first number 'd' is the largest initially
    largest = d;

    // Checking each number
    if (a > largest) largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    // Outputting the largest number
    printf("The largest number among them is %d\n", largest);

    return 0;
}
