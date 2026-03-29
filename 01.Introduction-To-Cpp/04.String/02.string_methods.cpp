#include <bits/stdc++.h>
using namespace std;
int main(){
    string text = "Hello world";
    // append() and at() in previous file

    //back()-Returns the last character of the string
    cout << text.back() << endl;

    //begin()-Returns an iterator pointing to the first character of the string
    auto it = text.begin();
    cout << "First character:" << *it << endl;//to deference the iterator we use * before the variable name we want to declare

    // clear()-Make the string empty
    string text2 = "Taqi Tahmid";
    cout << "before:" << text2 << " which size is " << text2.length() << endl;
    text2.clear();
    cout << "after:" << text2 << " which size is " << text2.length() << endl;

    // compare()-Compares the string with another string and returns the result
    /*
    The way the compare fucntion works:
    -It returns 0 if the strings are the same
    -It returns a negative number if the first string is alphabetically smaller than the second string
    -It returns a positive number if the first string is alphabetically greater than the second string
    */
    string a = "Hello";
    string b = "Hello";
    cout << a.compare(b) << endl;

    //copy()-copies character from the string into a character array
    
}