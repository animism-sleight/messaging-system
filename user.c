// user.c

#include <stdio.h>
#include "user.h"

void displayUser(const struct User* user) {
    printf("User ID: %d, Name: %s\n", user->userId, user->name);
}
