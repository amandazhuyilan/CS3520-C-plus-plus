//
//  fizzbuzz.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/21/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

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
