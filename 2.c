#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Insert at the end
void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        printf("✅ Inserted %d as the first node.\n", value);
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    printf("✅ Inserted %d at the end.\n", value);
}

// Delete by value
void delete(struct Node** head, int value) {
    struct Node *temp = *head, *prev = NULL;

    if (temp == NULL) {
        printf("⚠️ List is empty. Nothing to delete.\n");
        return;
    }

    if (temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("🗑️ Deleted %d from the list.\n", value);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("❌ Value %d not found in the list.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("🗑️ Deleted %d from the list.\n", value);
}

// Display all nodes
void traverse(struct Node* head) {
    if (head == NULL) {
        printf("📭 The list is empty.\n");
        return;
    }

    printf("📜 Current List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main menu
int main() {
    struct Node* head = NULL;
    int choice, value;

    printf("🚀 Welcome to Linked List Manager!\n");

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert a number\n");
        printf("2. Delete a number\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("👉 Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("🔢 Enter number to insert: ");
                scanf("%d", &value);
                insert(&head, value);
                break;
            case 2:
                printf("🗑️ Enter number to delete: ");
                scanf("%d", &value);
                delete(&head, value);
                break;
            case 3:
                traverse(head);
                break;
            case 4:
                printf("👋 Exiting. Thanks for using Linked List Manager!\n");
                return 0;
            default:
                printf("❌ Invalid choice. Try again.\n");
        }
    }

    return 0;
}

