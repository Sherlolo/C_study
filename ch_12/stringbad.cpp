#include <iostream>
#include <cstring>
#include "stringbad.h"
using std::cout;
int StringBad::num_strings = 0;

StringBad::StringBad(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str,s);
    num_strings++;
    cout << str << " created\n";
}


StringBad::StringBad()
{
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << str << " created\n";
}

StringBad::~StringBad()
{
    cout << str << " deleted\n";
    delete []str;
    num_strings--;
    cout << num_strings << " left\n";
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str << std::endl;
    return os;
}