#include <unistd.h>
#include <signal.h>
#include <cmalloc>
#include <error.h>
#include <sys/mmap.h>
#include <cstdio>
#include <cstdlib>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while(0)

static char* buffer
