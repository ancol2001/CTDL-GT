#include <stdio.h>
#include <stdlib.h>

struct Node {
    int n;
    struct Node* next;
};

typedef struct Node* node;

node createNode(int x) {
    node res = (node)malloc(sizeof(struct Node));
    res->n = x;
    res->next = NULL;
    return res;
}

int check(node a, int x) {
    if (a == NULL)
        return 1;
    while (a != NULL) {
        if (a->n == x)
            return 0;
        a = a->next;
    }
    return 1;
}

void addBack(node* A, int x) {
    if (*A == NULL) {
        *A = createNode(x);
        return;
    }
    node tmp = *A;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = createNode(x);
}

int main() {
    int t = 1, n, x;
    //cin >> t;
    while (t--) {
        scanf("%d", &n);
        node A = NULL;
        while (n--) {
            scanf("%d", &x);
            if (check(A, x))
                addBack(&A, x);
        }
        while (A != NULL) {
            printf("%d ", A->n);
            A = A->next;
        }
        printf("\n");
    }
    return 0;
}
