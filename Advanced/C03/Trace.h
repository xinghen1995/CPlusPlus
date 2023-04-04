//: Trace.h
// Creating a trace file.
#ifndef TRACE_H
#define TRACE_H
#include <fstream>

#ifdef TRACEON
ofstream TRACEFILE_("TRACE.OUT");
#define cout TRACEFILE_
#endif // TRACEON

#endif // TRACE_H ///:~
