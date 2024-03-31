#include <iostream>
using namespace std;

class book {
private:
    string bookName;
    string writer;
    int year;

public:
    book() {
        bookName = "-";
        writer = "-";
        year = 0;
    }
    
    void set(string a, string b, int c) {
        bookName = a;
        writer = b;
        year = c;
    }

    void display1() {
        cout << " Book Information 1 " << endl
             << " Title \t: " << bookName << endl
             << " Writer : " << writer << endl
             << " Year \t: " << year << endl;
    }
    
    void display2() {
        cout << " Book Information 2 " << endl
             << " Title \t: " << bookName << endl
             << " Writer : " << writer << endl
             << " Year \t: " << year << endl;
    }
};

int main() {
	
    book myBook1, myBook2;

    myBook1.set("Harry Potter and the Philosopher's Stone", "J.K Rowling", 1997);


    myBook1.display1();
    cout << endl;

    myBook2.set("To Kill a Mockingbird", "Harper Lee", 1960);
    myBook2.display2();

    return 0;
}
