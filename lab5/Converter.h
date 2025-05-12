#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
using namespace std;

string InfixToPostfix(const string& infix);
string InfixToPrefix(const string& infix);
string PostfixToInfix(const string& expr);
string PrefixToInfix(const string& expr);
double EvaluatePostfix(const string& expr);
double EvaluatePrefix(const string& expr);

#endif //CONVERTER_H
