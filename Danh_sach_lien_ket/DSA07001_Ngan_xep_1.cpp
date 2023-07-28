#include <iostream>
using namespace std;

// Định nghĩa cấu trúc dữ liệu cho một phần tử trong ngăn xếp
struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

// Lớp Stack đại diện cho ngăn xếp
class Stack
{
private:
    Node *top; // Con trỏ trỏ đến đỉnh ngăn xếp

public:
    Stack() : top(nullptr) {}

    // Thêm một phần tử vào đỉnh ngăn xếp (thao tác push)
    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    // Xóa phần tử khỏi đỉnh ngăn xếp (thao tác pop)
    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }
    void LinkedListReverse(Node *current)
    {
        if (current == nullptr)
        {
            return;
        }
        LinkedListReverse(current->next);
        cout << current->data << " ";
    }

    // Hiển thị các phần tử trong ngăn xếp (thao tác show)
    void show()
    {
        if (top == nullptr)
        {
            cout << "empty" << endl;
            return;
        }
        // Node* current = top;
        // while (current != nullptr) {
        //     cout << current->data << " ";
        //     current = current->next;
        // }
        // cout << endl;
        LinkedListReverse(top);
        cout << endl;
    }
};

int main()
{
    Stack stack;
    string command;
    int value;

    while (cin >> command)
    {
        if (command == "push")
        {
            cin >> value;
            stack.push(value);
        }
        else if (command == "pop")
        {
            stack.pop();
        }
        else if (command == "show")
        {
            stack.show();
        }
    }

    return 0;
}
