//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;

int main(){
   int x,y;
   int*ptr1=&x;
   int*ptr2=&y;
   cout<<"enter first number :";
   cin>>*ptr1;
   cout<<"enter second number :";
   cin>>*ptr2;

   cout<<"product is : "<<*ptr1 * *ptr2;
}