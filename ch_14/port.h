#ifndef PORT_H_
#define PORT_H_
#include <iostream>
#include <string>
#include <cstring>
class Port
{
private:
    char* band;
    char style[20];
    int bottles;
public:
    Port();
    Port(const char * br = "NULL", const char * st = "none", int b = 0);
    Port(const Port& p);
    virtual ~Port();
    Port& operator=(const Port& p);
    Port& operator+=(int b);
    Port& operator-=(int b);
    int BottleCount() const {return bottles;};
    virtual void Show() const;
    friend std::ostream& operator<<(std::ostream& os, const Port& p);
};

class VintagePort : public Port
{
private:
    char * nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nn, int y);
    VintagePort(const VintagePort & vp);
    virtual ~VintagePort();
    VintagePort& operator=(const VintagePort& vp);
    void Show() const;
    friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);

};

#endif