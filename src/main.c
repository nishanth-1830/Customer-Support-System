#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure for Ticket
struct Ticket {
    int id;
    char name[50];
    char issue[100];
    char status[20];
};

struct Ticket tickets[MAX];
int count = 0;

// Function to create ticket
void createTicket() {
    printf("\nEnter Ticket ID: ");
    scanf("%d", &tickets[count].id);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", tickets[count].name);

    printf("Enter Issue: ");
    scanf(" %[^\n]", tickets[count].issue);

    strcpy(tickets[count].status, "Open");

    count++;
    printf("✅ Ticket Created Successfully!\n");
}

// Function to view all tickets
void viewTickets() {
    if (count == 0) {
        printf("\nNo tickets available.\n");
        return;
    }

    printf("\n--- All Tickets ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d", tickets[i].id);
        printf("\nName: %s", tickets[i].name);
        printf("\nIssue: %s", tickets[i].issue);
        printf("\nStatus: %s\n", tickets[i].status);
    }
}

// Function to search ticket
void searchTicket() {
    int id, found = 0;
    printf("\nEnter Ticket ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tickets[i].id == id) {
            printf("\nTicket Found!");
            printf("\nName: %s", tickets[i].name);
            printf("\nIssue: %s", tickets[i].issue);
            printf("\nStatus: %s\n", tickets[i].status);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("❌ Ticket not found!\n");
}

// Function to update ticket status
void updateStatus() {
    int id, found = 0;
    printf("\nEnter Ticket ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tickets[i].id == id) {
            printf("Enter new status (Open/Closed/In Progress): ");
            scanf(" %[^\n]", tickets[i].status);
            printf("✅ Status Updated!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("❌ Ticket not found!\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n\n--- Customer Support System ---\n");
        printf("1. Create Ticket\n");
        printf("2. View Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Update Status\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createTicket(); break;
            case 2: viewTickets(); break;
            case 3: searchTicket(); break;
            case 4: updateStatus(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}