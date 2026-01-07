#include <stdio.h>
#include <stdlib.h>

/* Structure definition */
struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

/* Function declarations */
void createAccount(struct Account *acc);
void deposit(struct Account *acc);
void withdraw(struct Account *acc);
void checkBalance(struct Account *acc);
void saveToFile(struct Account *acc);
int loadFromFile(struct Account *acc);
