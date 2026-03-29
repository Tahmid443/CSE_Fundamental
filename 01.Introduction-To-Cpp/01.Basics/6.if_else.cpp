#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 40;
    if(a>40){
        cout << "a is greater than 40" << endl;
    }else if(a==40){
        cout << "a is equaL to 40" << endl;
    }else{
        cout << "a is smaller than 40" << endl;
    }

    int age = 18;
    bool driving_license = true;
    if(age>=18){
        if(driving_license){
            cout << "You can drive the car" << endl;
        }else{
            cout << "Sorry you cant drive cause you dont have license" << endl;
        }
    }else{
        cout << "You are not eligible" << endl;
    }
}