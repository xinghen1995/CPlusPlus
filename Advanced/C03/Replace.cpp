//: C03:Replace.cpp
#include <cassert>
#include <cstddef> // For size_t
#include <string>
using namespace std;

void replaceChars(string& modifyMe,
        const string& findMe, const string& newChars)
{
    // Look in modifyMe for the "find string"
    // starting at position 0:
    size_t i = modifyMe.find(findMe, 0);
    // Did we find the string to replace?
    if (i != string::npos)
    {
        // Replace the find string with newChars:
        modifyMe.replace(i, findMe.size(), newChars);
    }
}

int main()
{
    string bigNews = "I thought I saw Elvis in a UFO. "
                     "I have been working too hard.";
    string replacement("wig");
    string findMe("UFO");
    // Find "UFO" in bigNews and overwrite it:
    replaceChars(bigNews, findMe, replacement);
    assert(bigNews == "I thought I saw Elvis in a "
            "wig. I have been working too hard.");
} ///:~
