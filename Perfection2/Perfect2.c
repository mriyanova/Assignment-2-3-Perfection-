#include <stdio.h>

// This function checks if the number is perfect
int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

// This function is for the user input
int get_input() {
    int num;
    printf("Enter a number to check if it is perfect: ");
    scanf("%d", &num);
    return num;
}

// This function displays the results
void display_result(int num, int isPerfect) {
    if (isPerfect) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
}

int main() {
    int user_number = get_input();  
    int result = is_perfect(user_number);  
    display_result(user_number, result);  
    return 0;
}
