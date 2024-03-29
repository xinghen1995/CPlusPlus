#include <limits>
#include <iostream>

int main()
{
    std::cout << "type\tlowest()\tmin()\t\tmax()\t\n\n"
              << "bool\t"
              << std::numeric_limits<bool>::lowest() << "\t\t"
              << std::numeric_limits<bool>::min() << "\t\t"
              << std::numeric_limits<bool>::max() << "\n"
              << "uchar\t"
              << +std::numeric_limits<unsigned char>::lowest() << "\t\t"
              << +std::numeric_limits<unsigned char>::min() << "\t\t"
              << +std::numeric_limits<unsigned char>::max() << "\n"
              << "int\t"
              << std::numeric_limits<int>::lowest() << "\t\t"
              << std::numeric_limits<int>::min() << "\t\t"
              << std::numeric_limits<int>::max() << "\n"
              << "float\t"
              << std::numeric_limits<float>::lowest() << "\t\t"
              << std::numeric_limits<float>::min() << "\t\t"
              << std::numeric_limits<float>::max() << "\n"
              << "double\t"
              << std::numeric_limits<double>::lowest() << "\t\t"
              << std::numeric_limits<double>::min() << "\t\t"
              << std::numeric_limits<double>::max() << "\n";
}
