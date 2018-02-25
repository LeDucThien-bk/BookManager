#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class book{

public:
    void setname(){
        cout << "nhap ten sach: ";
        getline(cin,_name);
    }
    void setauthor(){
        cout << "nhap tac gia: ";
        getline(cin,_author);
    }
    void setpublisher(){
        cout << "nhap ten nha xuat ban: ";
        getline(cin, _publisher);
    }
    void setstate(){
        cout << "nhap so luong sach con trong thu vien: ";
        cin >> _state1;
        cout << "nhap so luong sach da cho muon: ";
        cin >> _state2;
    }
    void setdate(){
        cout << "thoi gian nhap sach(dd:mm:yy): ";
        cin >> date;
    }
    string getpublisher(){
        return _publisher;
    }
    string getauthor(){
        return _author;
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

    string getdate(){
        return _date;
    }
private:
    string _name, _author,_publisher;
    int _state1;
    int _state2;
    string _date;
};

#endif // BOOK_H
