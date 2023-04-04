//: C05:Urand.h
// Unique randomizer
#ifndef URAND_H
#define URAND_H
#include <bitset>
#include <cstddef>
#include <ctime>
using std::size_t;
using std::bitset;

template<size_t UpperBound> class Urand
{
    bitset<UpperBound> used;
public:
    Urand()
    {
        srand(time(0)); // Randomize
    }
    size_t operator()(); // The "generator" functoin
};

template<size_t UpperBound>
inline size_t Urand<UpperBound>::operator()()
{
    if (used.count() == UpperBound)
        used.reset(); // Start over (clear bitset)

    size_t newval;
    while (used[newval = rand() % UpperBound]); // Until unique value is found
    used[newval] = true;
    return newval;
}
#endif
