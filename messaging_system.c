// messaging_system.c

#include <stdio.h>
#include "user.h"
#include "message.h"

struct MessagingSystem {
    struct User users[10];
    struct Message messages[20];
    int userCount;
    int messageCount;
};

void initializeMessagingSystem(struct MessagingSystem* system);
void addUser(struct MessagingSystem* system, const char* name);
void sendMessage(struct MessagingSystem* system, int senderId, int receiverId, const char* content);
void displaySystemState(const struct MessagingSystem* system);

int main() {
    struct MessagingSystem system;
    initializeMessagingSystem(&system);

    // Adding users
    addUser(&system, "Alice");
    addUser(&system, "Bob");
    addUser(&system, "Charlie");

    // Sending messages
    sendMessage(&system, 1, 2, "Hello Bob!");
    sendMessage(&system, 2, 1, "Hi Alice!");

    // Displaying system state
    displaySystemState(&system);

    return 0;
}
