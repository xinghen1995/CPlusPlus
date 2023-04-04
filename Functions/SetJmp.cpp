#include <iostream>
#include <csetjmp>

std::jmp_buf jump_buffer;

[[noreturn]] void a(int count)
{
    std::cout << "a(" << count << ")" << std::endl;
    std::longjmp(jump_buffer, count + 1);
}

int main()
{
    volatile int count = 0;
    if (setjmp(jump_buffer) != 9)
    {
        a(++count);
    }
}
