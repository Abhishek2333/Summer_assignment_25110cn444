#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a[100];
    int n, i, choice, searchAcc, found;
    float amount;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for account %d\n", i + 1);

        printf("Account No: ");
        scanf("%d", &a[i].accNo);

        printf("Name: ");
        scanf("%s", a[i].name);

        printf("Initial Balance: ");
        scanf("%f", &a[i].balance);
    }

    while (1) {
        printf("\n===== BANK MENU =====\n");
        printf("1. Display All Accounts\n");
        printf("2. Search Account\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nAccount Details:\n");
                for (i = 0; i < n; i++) {
                    printf("Acc No: %d, Name: %s, Balance: %.2f\n",
                           a[i].accNo, a[i].name, a[i].balance);
                }
                break;

            case 2:
                printf("Enter Account No: ");
                scanf("%d", &searchAcc);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (a[i].accNo == searchAcc) {
                        printf("Account Found!\n");
                        printf("Acc No: %d, Name: %s, Balance: %.2f\n",
                               a[i].accNo, a[i].name, a[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Account not found!\n");
                }
                break;

            case 3:
                printf("Enter Account No: ");
                scanf("%d", &searchAcc);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (a[i].accNo == searchAcc) {
                        printf("Enter deposit amount: ");
                        scanf("%f", &amount);

                        if (amount > 0) {
                            a[i].balance += amount;
                            printf("Amount deposited successfully!\n");
                        } else {
                            printf("Invalid amount!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Account not found!\n");
                }
                break;

            case 4:
                printf("Enter Account No: ");
                scanf("%d", &searchAcc);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (a[i].accNo == searchAcc) {
                        printf("Enter withdrawal amount: ");
                        scanf("%f", &amount);

                        if (amount > 0 && amount <= a[i].balance) {
                            a[i].balance -= amount;
                            printf("Withdrawal successful!\n");
                        } else {
                            printf("Insufficient balance or invalid amount!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Account not found!\n");
                }
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
