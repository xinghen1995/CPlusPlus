//: C06:PrintSequence.h
// Prints the contents of any sequence.
#ifndef PRINTSEQUENCE_H
#define PRINTSEQUENCE_H
#include <algorithm>
#include <iostream>
#include <iterator>
template<typename iter>
void print(iter first, iter last, const char* nm = "",
        const char* sep = "\n",
        std::ostream& os = std::cout)
{
    if (nm != 0 && *nm != '\0')
        os << nm << ": " << sep;
    typedef typename
        std::iterator_traits<Iter>::value_type T;
}
#endif // PRINTSEQUENCE_H ///:~
