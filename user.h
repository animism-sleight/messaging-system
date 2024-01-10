// user.h

#ifndef USER_H
#define USER_H

struct User {
    int userId;
    char name[50];
};

void displayUser(const struct User* user);

#endif // USER_H
