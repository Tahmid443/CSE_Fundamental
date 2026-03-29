#include <bits/stdc++.h>
using namespace std;
int main(){
    
    // int lotteryTickets[3] = {55,32};//array on stack with a capacity of 3, size = 2
    // lotteryTickets[2] = 64;//size = 3, capacity = 3
    // lotteryTickets[3] = 93;//it might store in my memory but it is not an element of the array i have been declared
    int capacity;
    cout << "how many tickets you want to buy" << endl;
    cin >> capacity;
    
    int *lotteryTickets = new int[capacity];
    for (int i = 0; i < capacity; i++){
        cout << "Enter a lottery number:";
        cin >> lotteryTickets[i];
    }
    for (int i = 0; i < capacity; i++){
        cout << lotteryTickets[i] << " ";
    }
    cout << endl;

    delete[] lotteryTickets;
    lotteryTickets = nullptr;
}