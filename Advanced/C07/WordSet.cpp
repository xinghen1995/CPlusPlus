//: C07:WordSet.cpp
#include <fstream>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include "../require.h"
using namespace std;

void wordSet(const char* fileName)
{
    ifstream source(fileName);
    assure(source, fileName);
    string word;
    set<string> words; // 存储字符串
    while (source >> word) // 遇到空白符，拆分
        words.insert(word);
    copy(words.begin(), words.end(),
            ostream_iterator<string>(cout, "\n"));
    cout << "Number of unique words:"
        << words.size() << endl;
} 

int main(int argc, char* argv[])
{
    if (argc > 1)
        wordSet(argv[1]);
    else
        wordSet("../Advanced/C07/WordSet.cpp");
}///:~
