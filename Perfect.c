#include <stdio.h>

int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int user_number;
    
    printf("Enter a number to check if it is perfect: ");
    scanf("%d", &user_number);
    
    if (is_perfect(user_number)) {
        printf("%d is a perfect number.\n", user_number);
    } else {
        printf("%d is not a perfect number.\n", user_number);
    }
    
    return 0;
}


