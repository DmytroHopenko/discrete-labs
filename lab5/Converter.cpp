#include "Converter.h"
#include "List.h"
#include <sstream>
#include <stack>
#include <cmath>
#include <vector>
#include <algorithm>

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isOperator(char c) {
    return precedence(c) > 0;
}

string InfixToPostfix(const string& infix) {
    Node* stack = nullptr;
    string output;

    for (size_t i = 0; i < infix.length(); ++i) {
        char token = infix[i];

        if (isspace(token)) continue;

        if (isdigit(token)) {
            string number;
            while (i < infix.length() && (isdigit(infix[i]) || infix[i] == '.')) {
                number += infix[i++];
            }
            --i;
            output += number + ' ';
        } else if (token == '(') {
            push(stack, token);
        } else if (token == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                output += pop(stack);
                output += ' ';
            }
            pop(stack);
        } else if (isOperator(token)) {
            while (!isEmpty(stack) && precedence(peek(stack)) >= precedence(token)) {
                output += pop(stack);
                output += ' ';
            }
            push(stack, token);
        }
    }

    while (!isEmpty(stack)) {
        output += pop(stack);
        output += ' ';
    }

    return output;
}

string reverseAndSwap(const string& expr) {
    string rev;
    for (int i = expr.size() - 1; i >= 0; --i) {
        if (expr[i] == '(') rev += ')';
        else if (expr[i] == ')') rev += '(';
        else rev += expr[i];
    }
    return rev;
}

string InfixToPrefix(const string& infix) {
    string reversed = reverseAndSwap(infix);
    string postfix = InfixToPostfix(reversed);
    reverse(postfix.begin(), postfix.end());
    return postfix;
}

string PostfixToInfix(const string& expr) {
    stack<string> s;
    istringstream iss(expr);
    string token;

    while (iss >> token) {
        if (isOperator(token[0]) && token.length() == 1) {
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            s.push("(" + op1 + " " + token + " " + op2 + ")");
        } else {
            s.push(token);
        }
    }
    return s.top();
}

string PrefixToInfix(const string& expr) {
    stack<string> s;
    istringstream iss(expr);
    vector<string> tokens;
    string token;

    while (iss >> token)
        tokens.push_back(token);

    for (int i = tokens.size() - 1; i >= 0; --i) {
        token = tokens[i];
        if (isOperator(token[0]) && token.length() == 1) {
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            s.push("(" + op1 + " " + token + " " + op2 + ")");
        } else {
            s.push(token);
        }
    }
    return s.top();
}

double EvaluatePostfix(const string& expr) {
    stack<double> s;
    istringstream iss(expr);
    string token;

    while (iss >> token) {
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1)) {
            s.push(stod(token));
        } else if (isOperator(token[0])) {
            double b = s.top(); s.pop();
            double a = s.top(); s.pop();
            switch (token[0]) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
                case '^': s.push(pow(a, b)); break;
            }
        }
    }
    return s.top();
}

double EvaluatePrefix(const string& expr) {
    stack<double> s;
    istringstream iss(expr);
    vector<string> tokens;
    string token;

    while (iss >> token)
        tokens.push_back(token);

    for (int i = tokens.size() - 1; i >= 0; --i) {
        token = tokens[i];
        if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1)) {
            s.push(stod(token));
        } else if (isOperator(token[0])) {
            double a = s.top(); s.pop();
            double b = s.top(); s.pop();
            switch (token[0]) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
                case '^': s.push(pow(a, b)); break;
            }
        }
    }
    return s.top();
}