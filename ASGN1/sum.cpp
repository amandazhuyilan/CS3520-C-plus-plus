//
//  sum.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/22/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

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
