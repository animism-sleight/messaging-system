// message.h

#ifndef MESSAGE_H
#define MESSAGE_H

struct Message {
    int messageId;
    int senderId;
    int receiverId;
    char content[200];
};

void displayMessage(const struct Message* message);

#endif // MESSAGE_H
