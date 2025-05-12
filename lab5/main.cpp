#include "Converter.h"

int main() {
    string expr;
    int choice;

    do {
        cout << "\n--- Expression Converter Menu ---\n";
        cout << "1. Infix to Postfix\n";
        cout << "2. Infix to Prefix\n";
        cout << "3. Postfix to Infix\n";
        cout << "4. Prefix to Infix\n";
        cout << "5. Evaluate Postfix\n";
        cout << "6. Evaluate Prefix\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter infix: "; getline(cin, expr);
            cout << "Postfix: " << InfixToPostfix(expr) << endl;
            break;
            case 2:
                cout << "Enter infix: "; getline(cin, expr);
            cout << "Prefix: " << InfixToPrefix(expr) << endl;
            break;
            case 3:
                cout << "Enter postfix: "; getline(cin, expr);
            cout << "Infix: " << PostfixToInfix(expr) << endl;
            break;
            case 4:
                cout << "Enter prefix: "; getline(cin, expr);
            cout << "Infix: " << PrefixToInfix(expr) << endl;
            break;
            case 5:
                cout << "Enter postfix (numbers): "; getline(cin, expr);
            cout << "Result: " << EvaluatePostfix(expr) << endl;
            break;
            case 6:
                cout << "Enter prefix (numbers): "; getline(cin, expr);
            cout << "Result: " << EvaluatePrefix(expr) << endl;
            break;
            case 0:
                cout << "Program completion..." << endl;
            break;
            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 0);

    return 0;
}