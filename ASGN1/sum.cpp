//
//  sum.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/22/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

/* This program reads whitespace-separated integers from standard input until end of-file or any stream error conditions are encountered, and then prints the sum of the integers. Note that on Linux you can use Ctrl+D to send end-of-file to standard input.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int input;
    cout << "Please enter numbers. Press ctr + D when completed." << endl;
    while(cin >> input)
    {
        sum = sum + input;
    }
    
    cout << sum << endl;
    return 0;
}
