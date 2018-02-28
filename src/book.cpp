#include "book.h"

book::book(){} // constructors
book::~book(){} //destructors
void book::setname(){
        cout << "nhap ten sach: ";
        getline(cin,_name);
    }
void book::setauthor(){
        cout << "nhap tac gia: ";
        getline(cin,_author);
    }
void book::setgenre(){
        cout << "nhap the loai sach: ";
        getline(cin, _genre);
    }
void book::setpublisher(){
        cout << "nhap ten nha xuat ban: ";
        getline(cin, _publisher);
    }
void book::setstate1(){
        cout << "nhap so luong sach them vao thu vien: ";
        cin >> _state1;
        setdate();
    }
void book::setstate2(){
        cout << "so luong sach da cho muon: ";
        cin >> _state2;
    }
void book::setdate(){ // auto set date
        time_t now = time('\0');
        tm *t = localtime(&now);
        int i = t ->tm_mday;
        _date.dd = i;
        i = t ->tm_mon +1;
        _date.mm = i;
        i = t ->tm_year + 1900;
        _date.yy = i;
    }

string book::getauthor(){
        return _author;
    }
string book::getname(){
        return _name;
    }
string book::getgenre(){
        return _genre;
    }
string book::getpublisher(){
        return _publisher;
    }
int book::getstate1(){
        return _state1;
    }
int book::getstate2(){
        return _state2;
    }
void book::getdate(){
        cout << _date.dd << ":" <<_date.mm << ":"<< _date.yy << endl;
    }
void book::display(){
        cout << getname() << " | " << getauthor() << " | " << getgenre() << " | " << getpublisher() << " | SL: " << getstate2() << "/" << getstate1() << " | ";
        getdate();
    }



