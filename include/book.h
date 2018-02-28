#ifndef BOOK_H
#define BOOK_H

#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Date{
        int dd,mm,yy;
    };

class book{
public:
    book();
    virtual ~book();
    void setname();
    void setauthor();
    void setgenre();
    void setpublisher();
    void setstate1();
    void setstate2();
    void setdate();
    string getauthor();
    string getname();
    string getgenre();
    string getpublisher();
    int getstate1();
    int getstate2();
    void getdate();
    void display();
private:
    string _name, _author,_publisher;
    int _state1;
    int _state2;
    string _genre;
    struct Date _date;
};

#endif // BOOK_H
