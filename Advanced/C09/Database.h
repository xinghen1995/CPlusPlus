//: C09:Database.h
// A prototypical resource class.
#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <stdexcept>
#include <string>

struct DatabaseError : std::runtime_error
{
    DatabaseError(const std::string& msg)
        : std::runtime_error(msg) {}
};

class Database
{
    std::string dbid;
public:
    Database(const std::string& dbStr) : dbid(dbStr) {}
    virtual ~Database() {}
    void open() throw(DatabaseError)
    {
        std::cout << "Connected to " << dbid << std::endl;
    }
    void close()
    {
        std::cout << dbid << " closed" << std::endl;
    }
    // Other database functions...
};
#endif // DATABASE_H ///:~
