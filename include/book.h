#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class book{
private:
    string _name;
    int _state1;
    int _state2;
    string time;
public:
    void setname(){
        cout << "nhap ten sach: ";
        getline(cin,_name);
    }
    void setstate(){
        cout << "nhap so luong sach con trong thu vien: ";
        cin >> _state1;
        cout << "nhap so luong sach da cho muon: ";
        cin >> _state2;
    }
    string getname(){
        return _name;
    }
    int getstate1(){
        return _state1;
    }
    int getstate2(){
        return _state2;
    }
    void settime(){
        cout << "thoi gian nhap sach(dd:mm:yy): ";
        cin >> time;
    }
    string gettime(){
        return time;
    }
};

#endif // BOOK_H
