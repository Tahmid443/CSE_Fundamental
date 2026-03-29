//Memory management is the process of controlling how much memory your program uses - and how it is used.This includes creating, using, and releasing memory when it's no longer needed.
int myNumber = 10;
// The line above tells the program: "I need space to store an integer." C++ handles this memory automatically, so in this case, you dont have to worry about managing memory.

/*
The new keyword lets you manage memory yourself.

In the example below, we create memory space for an integer using new, store the value 35 in it, and print it using a pointer:
*/
/*
When you create something with new, it's your job to remove it when you're done.

To do that, use delete:
*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    int *ptr = new int;
    *ptr = 35;
    cout << *ptr;
    delete ptr;
}
//So we used new to create memory, and ptr to access it.
