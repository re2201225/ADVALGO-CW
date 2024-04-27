//#include <iostream>
//using namespace std;
//
//// Node structure for doubly linked list
//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
//};
//
//// Function to append node to the end of the doubly linked list
//void append(Node** head, int value) {
//    Node* new_node = new Node(value);
//    if (*head == nullptr) {
//        *head = new_node;
//        return;
//    }
//    Node* temp = *head;
//    while (temp->next != nullptr) {
//        temp = temp->next;
//    }
//    temp->next = new_node;
//    new_node->prev = temp;
//}
//
//// Function to print the doubly linked list
//void printList(Node* node) {
//    while (node != nullptr) {
//        cout << node->data << " ";
//        node = node->next;
//    }
//    cout << endl;
//}
//
//// Function to find the last node of the doubly linked list
//Node* lastNode(Node* head) {
//    while (head && head->next) {
//        head = head->next;
//    }
//    return head;
//}
//
//// Function to swap data of two nodes
//void swap(int* a, int* b) {
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//// Partition function for Quick Sort
//Node* partition(Node* low, Node* high) {
//    int pivot = high->data;
//    Node* i = low->prev;
//
//    for (Node* j = low; j != high; j = j->next) {
//        if (j->data < pivot) {
//            i = (i == nullptr) ? low : i->next;
//            swap(&(i->data), &(j->data));
//        }
//    }
//    i = (i == nullptr) ? low : i->next;
//    swap(&(i->data), &(high->data));
//    return i;
//}
//
//// Recursive QuickSort function
//void quickSort(Node* low, Node* high) {
//    if (high != nullptr && low != high && low != high->next) {
//        Node* p = partition(low, high);
//        quickSort(low, p->prev);
//        quickSort(p->next, high);
//    }
//}
//
//// Main function to initiate QuickSort on doubly linked list
//int main() {
//    Node* head = nullptr;
//    append(&head, 9);
//    append(&head, 3);
//    append(&head, 4);
//    append(&head, 2);
//    append(&head, 5);
//    append(&head, 1);
//
//    cout << "Original doubly linked list:\n";
//    printList(head);
//
//    Node* last = lastNode(head);
//    quickSort(head, last);
//
//    cout << "Sorted doubly linked list:\n";
//    printList(head);
//
//    return 0;
//}
