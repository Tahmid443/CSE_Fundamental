#include <bits/stdc++.h>
using namespace std;
int main(){
    //for loop
    for (int i = 1; i <= 10;i++){
        cout << i << endl;
    }
    //even number in between 1 to 10
    cout << "The even numbers:" << endl;
    for (int i = 1; i <= 10; i++){
        if(i%2!=0){
            continue;
        }else{
            cout << i << " ";
        }
    }
    cout << endl;
    // while loop
    int i = 1;
    while(i<=10){
        cout << i << endl;
        i++;
    }
}