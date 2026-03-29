// A string variable contains a collection of characters surrounded by double quotes (""):
#include <bits/stdc++.h>
using namespace std;
int main(){
    string greeting = "Hello";
    cout << greeting << endl;
    // string concatenation
    // for concatenation the variables or values should be of same datatype
    string firstname = "John";
    string lastname = "Doe";
    string fullname = firstname + " " + lastname;
    // we can use append()
    string fullname = firstname.append(lastname);
    // string length
    string txt = "abcdefghijklmnopqrstuvwxyz";
    cout << txt.length() << endl;
    // we can access a string element or letter by using indexing or at() function
    string name = "Tahmid";
    cout << name.at(0) << endl;
    cout << name[0] << endl;
    // escape character
    //  we can use \ to print ' " \ tab(t) newLine(n)

    //take string as an user input
    string fullname;
    cout << "Enter your full name:" << endl;
    cin >> fullname;
    cout << fullname;//it will only show us the first word because it takes a space as a terminating character
    //so we can use getline(cin,variable) to get the whole sentece as the input.
    string fullname;
    cout << "Enter your full name:" << endl;
    getline(cin, fullname);
    cout << "Your name is " << fullname;
}