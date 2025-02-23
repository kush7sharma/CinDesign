 #include <stdio.h>

int main() {
    int balance = 1000;
    int choice;
    int amount;

    while(1) {
        printf("Press 1 for withdrawal\n");
        printf("Press 2 for deposit\n");
        printf("Press 3 for balance\n");
        printf("Press 4 for exit\n");

        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter amount to withdraw\n");
            scanf("%d", &amount);

            if(amount > balance) {
                printf("Insufficient balance\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful\n");
            }
        } else if(choice == 2) {
            printf("Enter amount to deposit\n");
            scanf("%d", &amount);

            balance += amount;
            printf("Deposit successful\n");
        } else if(choice == 3) {
            printf("Balance: %d\n", balance);
        } else if(choice == 4) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }
}