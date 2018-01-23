/* This program reads in lines of text from the file named frame_input.txt (in the same folder as the executable) until end of file, and then prints the text that was read in with a square frame of * characters around the text, horizontally separated by at least one space. If the input file cannot be opened or read, the program prints File error to standard error and exits. 
*/

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max_string(vector<string> &lines){
    int max_size = 0;
    for (auto it = begin (lines); it != end (lines); ++it) {
        if (it->length() > max_size){
            max_size = it->length();
        };
    }
    return max_size;
}

int main(){
    ifstream file("frame_input.txt");
    string str;
    vector<string> input_lines;
    
    // put lines from frame_input.txt into input_lines vector
    if(file){
        while (getline(file, str)){
            input_lines.push_back(str);
        }
    }
    else
        cout << "File error" << endl;
    
    int max_size = max_string(input_lines);
    
    cout << string(max_size + 4, '*') << endl;
    for (int i = 0; i < input_lines.size(); i++){
        cout << "* " << input_lines[i] << string(max_size - input_lines[i].length(),' ') << " *" << endl;
    }
    cout << string(max_size + 4, '*') << endl;

    return 0;
}

