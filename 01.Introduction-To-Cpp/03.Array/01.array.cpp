#include <bits/stdc++.h>
using namespace std;
int main()
{
    // the way of decraling the array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl; // it will show the address of the first element of the array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    /*
    We can use foreach loop as well
    for (type variableName : arrayName) {
        // code block to be executed
    }
    */
    string cars[5] = {"Volvo", "Audi", "BMW", "Lembo", "Mercedes"};
    for (string myCar : cars)
    {
        cout << myCar << endl;
    }
    // In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values:
    string cars[] = {"Volvo", "BMW", "Ford"};
    string cars[3] = {"Volvo", "BMW", "Ford"}; // same

    // If you don't specify the array size, an error occurs:
    // string cars[]; // Array size is not specified
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";
    // An array with 3 elements
    string cars[3] = {"Volvo", "BMW", "Ford"};

    // Trying to add another element (a fourth element) to the cars array will result in an error
    cars[3] = "Tesla";
    // To get the size of an array, you can use the sizeof() operator:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers); // it will give 20 as output.It is because the sizeof() operator returns the size of a type in bytes.
    // To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;
    /*
    A multi-dimensional array is an array of arrays.

    To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:
    */
    string letters[2][4];
    // As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multi-dimensional array, each element in an array literal is another array literal.
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    // Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:
    string letters[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}},
        {
            {"E", "F"},
            {"G", "H"}}
        };
    // To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
    string letter[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    for (int i = 0; i < 2; i++){
        for (int j = 0; j< 4; j++){
            cout << letter[i][j] << endl;
        }
    }
}