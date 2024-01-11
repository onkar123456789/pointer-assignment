// Q)3.
#include<iostream>
using namespace std;
int main(){

int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << " " << a << " " << b;

}

//option 3 correct