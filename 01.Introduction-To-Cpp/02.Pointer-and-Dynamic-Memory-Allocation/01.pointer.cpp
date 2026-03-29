#include <bits/stdc++.h>
using namespace std;
int main(){
    string food = "Pizza"; // A food variable of type string

    cout << food;  // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (0x6dfed4)
    /*
    A pointer however, is a variable that stores the memory address as its value.

    A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:
    */

    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";//same as previous line


    // There are three ways to declare pointer variables, but the first way is preferred:
    string *mystring; // Preferred
    string *mystring;
    string *mystring;

    /*
    Get Memory Address and Value
    In the example from the previous page, we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):
    */
    string food = "Pizza"; // Variable declaration
    string *ptr = &food;   // Pointer declaration

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";
}