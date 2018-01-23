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
        cout << "no files found!" << endl;
    
    int max_size = max_string(input_lines);
    
    cout << string(max_size + 4, '*') << endl;
    for (int i = 0; i < input_lines.size(); i++){
        cout << "* " << input_lines[i] << string(max_size - input_lines[i].length(),' ') << " *" << endl;
    }
    cout << string(max_size + 4, '*') << endl;

    return 0;
}

