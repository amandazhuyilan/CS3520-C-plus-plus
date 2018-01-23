//
//  fib.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/21/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

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
