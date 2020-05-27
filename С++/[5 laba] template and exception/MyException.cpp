#include "MyException.h"


MyException::MyException() = default;

MyException::MyException(std::string msg, int code) : msg_(msg), code_(code) {}

int MyException::code() const {
    return code_;
}

std::string MyException::msg() const {
    return msg_;
}