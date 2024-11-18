/* Aim :  Wap to find all the prime numbers between two numbers using functions.
  
*/
#include<stdio.h>
// Function to check if a number is prime
int isPrimeNumber(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}
int main() {
    int start_num, end_num;
    printf("\t\t\t *** Prime Number Finder *** \n\n");
    printf("Enter the Starting Number: ");
    scanf("%d", &start_num);
    printf("Enter the Ending Number: ");
    scanf("%d", &end_num);
    if (start_num > end_num) {
        printf("Invalid input: Starting number should be less than or equal to the ending number.\n");
        return 1; // Exit the program with an error
    }
    printf("\nPrime Numbers Between %d and %d:\n", start_num, end_num);

    for (int i = (start_num < 2 ? 2 : start_num); i <= end_num; i++) {
        if (isPrimeNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
/*
Enter the Starting Number: 3
Enter the Ending Number: 7

Prime Numbers Between 3 and 7:
3 5 7
*/
