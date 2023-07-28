#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node* node;

// Hàm tạo một node mới
node createNode(int value) {
    node newNode = (node)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Hàm thêm một node vào cuối danh sách liên kết
void addBack(node* first, int value) {
    if (*first == NULL) {
        *first = createNode(value);
    } else {
        node current = *first;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = createNode(value);
    }
}

int check(struct Node* first, int x) {
    struct Node* current = first;
    while (current != NULL) {
        if (current->data == x) {
            return 1; // Nếu x đã xuất hiện, trả về 1
        }
        current = current->next;
    }
    return 0;
}
// Xoá x khỏi list
void removeValue(node* first) {
    node current = *first;
    node prev = NULL;

    while (current != NULL) {
        if (current->data == x) {
            if (prev == NULL) {
                *first = current->next;
            } else {
                prev->next = current->next;
            }
            node temp = current;
            current = current->next;
            free(temp);
        } else {
            prev = current;
            current = current->next;
        }
    }
}

//
void show(node first) {
    node current = first;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {
    int n, x;
    scanf("%d", &n);
    node first = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        addBack(&first, x);
    }

    scanf("%d", &x);

    // Xóa các phần tử có giá trị bằng x
    removeValue(&first, x);

    // Liệt kê các phần tử còn lại trong danh sách
    show(first);
    printf("\n");

    node current = first;
    while (current != NULL) {
        node temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
