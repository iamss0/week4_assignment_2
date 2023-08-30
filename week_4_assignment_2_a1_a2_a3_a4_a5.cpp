// Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int product(int *ptr1, int *ptr2){
    int pro = (*ptr1) * (*ptr2);
    return pro;
}

int main(){
    int x,y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout<<product(ptr1,ptr2);
}


// Q2 : int *p, q;
// p is a pointer and q is an integer. YES THIS IS CORRECT, AS * IS ONLY WITH p AND NOT q.
// p and q both are pointers.
// P and q both are integers.
// Syntax is incorrect.

//Q3: Find the output of the following code snippet.

    // int a = 10, b = 20;
    // int *ptr = &a;
    // b = *ptr + 1;
    // ptr = &b;
    //  << *ptr <<" "<< a <<" "<< b;

// 11 11 10
// 10 10 10
// 11 10 11 THIS IS THE CORRECT OPTION
// 10 11 10


// Q4: Find the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;
// ptr now points to b
// ptr2 now points to a
// a gets value of b   THIS IS THE CORRECT OPTION
// b gets value of a


// Q5: Is the following program snippet correct?

// int a = 10, b = 20;
// int *ptr;
// *ptr = 5;

// Even if we try to print value of *ptr or ptr, no results come but at the same time no error occurs;
