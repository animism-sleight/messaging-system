// messaging_system.h

#ifndef MESSAGING_SYSTEM_H
#define MESSAGING_SYSTEM_H

struct MessagingSystem;

void initializeMessagingSystem(struct MessagingSystem* system);
void addUser(struct MessagingSystem* system, const char* name);
void sendMessage(struct MessagingSystem* system, int senderId, int receiverId, const char* content);
void displaySystemState(const struct MessagingSystem* system);

#endif // MESSAGING_SYSTEM_H
