#include <iostream>
#include <string>
using namespace std;

int main(){
    string given_string = "";
    cout << "Welcome to C++ String counter CLI\n";
    cout << "Enter a string to count the length: ";
    getline(cin,given_string);
    cout << "The length of given string is " << given_string.length();
    // cout << "The length of given string is " << given_string.size(); // Alternative
    return 0;
}