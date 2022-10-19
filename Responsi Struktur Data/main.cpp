/*Nama : Rivanda Dzaky Rakaputra
NIM  : A11.2021.13213
Kelas: 4317*/


#include <iostream>
#define MAX 25

using namespace std;

char stacks[MAX] = {'H', 'A', '*', '*', '*', 'L', '*', 'O', 'A', 'P', '*', '*', '*', 'A', '*', 'K', 'A', 'B', '*', 'A', 'R'};
char huruf[MAX];
int top;

int IsEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int IsFull()
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

void push(int i)
{
    if(IsFull() == 0){
        top++;
        huruf[top] = stacks[i];
    }
    else
         cout << "stack penuh";
}


int main()
{
    int j = sizeof(stacks)/sizeof(char);
    for(int i = 0; i<j; i++){
        if(stacks[i] != '*'){
            push(i);
        }
    }
    int jumlah = sizeof(stacks)/sizeof(char);
    for(int k = 0; k<jumlah; k++){
        cout << huruf[k];
    }
    return 0;
}
