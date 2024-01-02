#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int check_cycle(Node* list) {
    Node* slow = list;
    Node* fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1; // Cycle found
        }
    }

    return 0; // No cycle found
}

int main() {
    // Create a linked list with a cycle
    Node* list = (Node*)malloc(sizeof(Node));
    list->data = 1;

    Node* second = (Node*)malloc(sizeof(Node));
    second->data = 2;
    list->next = second;

    Node* third = (Node*)malloc(sizeof(Node));
    third->data = 3;
    second->next = third;

    // Create a cycle
    third->next = second;

    // Check if the linked list has a cycle
    int hasCycle = check_cycle(list);
    printf("Has cycle: %d\n", hasCycle);

    // Free the memory
    free(list);
    free(second);
    free(third);

    return 0;
}
