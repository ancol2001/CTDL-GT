#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

void push(struct Stack* stack, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

void pop(struct Stack* stack) {
    if (stack->top != NULL) {
        struct Node* temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
}

void show(struct Stack* stack) {
    struct Node* current = stack->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    if (stack->top == NULL) {
        printf("empty");
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    stack.top = NULL;

    char command[10];
    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "push") == 0) {
            int value;
            scanf("%d", &value);
            push(&stack, value);
        } else if (strcmp(command, "pop") == 0) {
            pop(&stack);
        } else if (strcmp(command, "show") == 0) {
            show(&stack);
        }
    }

    return 0;
}
