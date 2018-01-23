//
//  fib.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/21/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

/* This program prints out the first 25 Fibonacci numbers. Fibonacci numbers are defined as Fi = Fi-1 + Fi-2, with F0 = 1 and F1 = 1. Use a recursive function to compute the Fibonacci numbers.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int fib(int i){
    if (i <= 1)
        return i;
    else
        return fib(i-2) + fib(i-1);
}

int main(){
    int a;
    for (a = 0; a < 25; a++){
        cout << fib(a) << endl;
    }
    return 0;
}
