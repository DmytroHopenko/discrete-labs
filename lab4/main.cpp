#include "List.h"

int main() {
    Node* top = nullptr;
    Node* front = nullptr, *rear = nullptr;
    Node* head = nullptr;

    int mode = 0;
    int choice, value, key;

    do {
        cout << "\nMain Menu:\n";
        cout << "1. Stack\n";
        cout << "2. Queue\n";
        cout << "3. Doubly Linked List\n";
        cout << "0. Exit\n";
        cout << "Choose structure to work with: ";
        cin >> mode;

        switch (mode) {
            case 1:
                do {
                    cout << "\n--- Stack Menu ---\n";
                    cout << "1. Push\n";
                    cout << "2. Pop\n";
                    cout << "3. Show Stack\n";
                    cout << "0. Back to Main Menu\n";
                    cout << "Enter choice: ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            cout << "Enter value to push: ";
                            cin >> value;
                            push(top, value);
                            showStack(top);
                            break;
                        case 2:
                            pop(top);
                            showStack(top);
                            break;
                        case 3:
                            showStack(top);
                            break;
                    }
                } while (choice != 0);
                break;

            case 2:
                do {
                    cout << "\n--- Queue Menu ---\n";
                    cout << "1. Enqueue\n";
                    cout << "2. Dequeue\n";
                    cout << "3. Show Queue\n";
                    cout << "0. Back to Main Menu\n";
                    cout << "Enter choice: ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            cout << "Enter value to enqueue: ";
                            cin >> value;
                            enqueue(front, rear, value);
                            showQueue(front);
                            break;
                        case 2:
                            dequeue(front, rear);
                            showQueue(front);
                            break;
                        case 3:
                            showQueue(front);
                            break;
                    }
                } while (choice != 0);
                break;

            case 3:
                do {
                    cout << "\n--- Doubly Linked List Menu ---\n";
                    cout << "1. Add to beginning\n";
                    cout << "2. Add to end\n";
                    cout << "3. Delete from beginning\n";
                    cout << "4. Delete from end\n";
                    cout << "5. Search by key\n";
                    cout << "6. Add after key\n";
                    cout << "7. Delete by key\n";
                    cout << "8. Show list\n";
                    cout << "0. Back to Main Menu\n";
                    cout << "Enter choice: ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            cout << "Enter value to add at beginning: ";
                            cin >> value;
                            add_begin(head, value);
                            showList(head);
                            break;
                        case 2:
                            cout << "Enter value to add at end: ";
                            cin >> value;
                            add_end(head, value);
                            showList(head);
                            break;
                        case 3:
                            del_begin(head);
                            showList(head);
                            break;
                        case 4:
                            del_end(head);
                            showList(head);
                            break;
                        case 5:
                            cout << "Enter key to search: ";
                            cin >> key;
                            if (search(head, key))
                                cout << "Found node with key = " << key << endl;
                            else
                                cout << "Node not found.\n";
                            break;
                        case 6:
                            cout << "Enter key after which to add: ";
                            cin >> key;
                            cout << "Enter value to add: ";
                            cin >> value;
                            add_mid(head, key, value);
                            showList(head);
                            break;
                        case 7:
                            cout << "Enter key to delete: ";
                            cin >> key;
                            del_mid(head, key);
                            showList(head);
                            break;
                        case 8:
                            showList(head);
                            break;
                    }
                } while (choice != 0);
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid structure choice. Try again.\n";
        }

    } while (mode != 0);

    return 0;
}
