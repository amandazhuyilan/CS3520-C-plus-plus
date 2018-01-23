//
//  reverse.cpp
//  Assignment1
//
//  Created by Amanda Zhu on 1/22/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

/* This program reads in lines of text from the file named reverse_input.txt (in the same folder as the executable) until end of file, and then prints each line in reverse order with the characters in each line reversed. If the input file cannot be opened or read, the program prints File error to standard error and exits.
*/

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverse(string &str){
	int n = str.length();

	for (int i = 0; i < n/2; i++ )
		swap(str[i], str[n-i-1]);
}

int main(){
	vector<string> reverse_list;
    ifstream file("reverse_input.txt");
    string str;

    if(file){
    	 while (getline(file, str)){
    	 	reverse(str);
    	 	reverse_list.push_back(str);
    	}
    }
    else
 		cout << "File error" << endl;

 	for (int i = reverse_list.size(); i > 0; i--){
 		cout << reverse_list[i-1] << endl;
 	}
    
    return 0;
}
