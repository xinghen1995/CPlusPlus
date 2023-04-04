//: C03:SmallString2.cpp
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1("What is the sound of on clam napping?");
    string s2("Anything worth doing is worth overdoing.");
    string s3("I saw Elvis in a UFO");
    // Copy the first 8 char
    string s4(s1, 0, 8);
    cout << s4 << endl;
    // Copy 6 chars from the middle of the source:
    string s5(s2, 15, 6);
    cout << s5 << endl;
    // Copy form middle to end:
    string s6(s3, 6, 15);
    cout << s6 << endl;
    // Copy many different things:
    string quoteMe = s4 + "that" + 
    // substr() copies 10 chars at element 20
    s1.substr(20, 10) + s5 + 
    // substr() copies up to either 100 char
    // or eos starting at element 5
    "with" + s3.substr(5, 100) + 
    // OK to copy a single char this way
    s1.substr(37, 1);
    cout << quoteMe << endl;
} ///:~
