#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;


void push(int value) {
    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Stack overflow: Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack\n", value);
}


void pop() {
    if (top == NULL) {
        printf("Stack underflow: Stack is empty\n");
        return;
    }

    struct Node* temp = top;
    printf("Popped element: %d\n", top->data);

    top = top->next;
    free(temp);
}


    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}


void display() {
    struct Node* temp = top;

    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();
    display();

    peek();

    return 0;
}
