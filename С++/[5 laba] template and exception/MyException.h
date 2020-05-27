#pragma once
#include <string>
#include <exception>

class MyException : public std::exception {
    std::string msg_;
    int code_;
public:
    MyException();
    MyException(std::string msg, int code);
    int code() const;
    std::string msg() const;
};