//
//  fizzbuzz.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/21/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

/* This program prints out the numbers between 1 and 100 on each line; however, for numbers that are multiples of 3 it prints “Fizz” instead of the number, numbers that are multiples of 5 it prints “Buzz” instead of the number, and for numbers that are multiples of both 3 and 5 it prints “FizzBuzz” instead of the number.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a;
    for (a = 1; a < 100; a++){
        if(a%3 == 0 && a%5 != 0)
            cout << "Fizz" << endl;
        else if(a%5 == 0 && a%3 != 0 )
            cout << "Buzz" << endl;
        else if(a%5 == 0 && a%3 == 0)
            cout << "FizzBuzz" << endl;
        else
            cout << a << endl;
    }
    return 0;
}

