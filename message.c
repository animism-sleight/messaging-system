// message.c

#include <stdio.h>
#include "message.h"

void displayMessage(const struct Message* message) {
    printf("Message ID: %d, Sender ID: %d, Receiver ID: %d\n", message->messageId, message->senderId, message->receiverId);
    printf("Content: %s\n", message->content);
}
