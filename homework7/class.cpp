#include<iostream>
#include<vector>
using namespace std;

//Michael Steele

class Name
{
    private:
	string first_;
	string last_;
	public:
    void setName(string,string);
    string getFirst();
    string getLast();
    void display();
    void clear();
    void destroy();
};


class Date
{
    private:
	int year_;
	int month_;
	int day_;
	public:

    void setDate(int,int,int);
    int getDay();
    int getMonth();
    int getYear();
    void display();
    void clear();
    void destroy();
};


class Book
{
    private:
	Name   author_;
	string title_;
	int    year_;
	public:
    void setYear(int);
    void setTitle(string);
    void setAuthor(Name);
    int getYear();
    string getTitle();
    Name getAuthor();
    void clear();
    void display();

    void destroy();
};


class LibraryBook
{
    private:
	int  id_;
	Book book_;
	Name borrower_;
	Date borrowed_;
	Date due_;
	bool isLoaned_;
	public:
    int getId();
    void setId(int);
    bool getLoan();
    void setLoan(bool);
    Date getDue();
    void setDue(Date);
    Date getBorrowed();
    void setBorrowed(Date);
    Name getBorrower();
    void setBorrower(Name);
    Book getBook();
    void setBook(Book);
    void destroy();
    void display();



};



int main()
{
    int y = 2000;
    int d=12;
    int m =4;
    //cout << y << " " << m << " " << d << endl;

    Date today;

    today.setDate(y,m,d);
    int temp = today.getDay();

    //cout << "Day:   " << temp << endl;
    today.display();
    //today.clear();
    //today.display();
    Name myName;
    myName.setName("Michael","Steele");
    myName.display();

    Book myBook;
    myBook.setAuthor(myName);
    myBook.display();
    vector <LibraryBook> v;
    return 0;
}


//date methods
void Date::setDate(int yearIN,int monthIN, int dayIN)
{
        //cout << yearIN << endl;
        year_ =yearIN;
        month_ = monthIN;
        day_ = dayIN;
}
int Date::getDay()
{
    return day_;
}
int Date::getMonth()
{
    return month_;
}
int Date::getYear()
{
    return year_;
}
void Date::display()
{
    cout << "Month:   " << getMonth() << endl;
    cout << "Day:   " << getDay() << endl;
    cout << "Year:   " << getYear() << endl;

}
void Date::clear()
{
    day_ = 0;
    month_ = 0;
    year_ = 0;
}
void Date::destroy()
{
    Date *mem = nullptr;
    delete mem;
}



// name methods
void Name::setName(string firstIN,string lastIN)
{

        first_ =firstIN;
        last_ = lastIN;
}
string Name::getFirst()
{
    return first_;
}
string Name::getLast()
{
    return last_;
}

void Name::display()
{
    cout << "First:   " << getFirst() << endl;
    cout << "Last:   " << getLast() << endl;

}
void Name::clear()
{
    first_ = "";
    last_ = "";
}
void Name::destroy()
{
    Name *mem = nullptr;
    delete mem;
}
//class Book
//{
//    private:
//	Name   author_;
//	string title_;
//	int    year_;
//};
Name *mem = nullptr;

//book methods
void Book::setYear(int yearIN)
{

        year_ = yearIN;
}
void Book::setTitle(string titleIN)
{

        title_ = titleIN;
}
int Book::getYear()
{
    return year_;
}
string Book::getTitle()
{
    return title_;
}
void Book::setAuthor(Name nameIn)
{
    author_ = nameIn;
}
Name Book::getAuthor()
{
    return author_;
}
void Book::display()
{
    cout << "Author:    " << getAuthor().getFirst() << " " << getAuthor().getLast() << endl;
}
void Book::destroy()
{
    Book *mem = nullptr;

    delete mem;
}
void Book::clear()
{
    author_.clear();
    year_ = 0;
    author_.clear();
}

//Library Book methods

//class LibraryBook
//{
//    private:
//	int  id_;
//	Book book_;
//	Name borrower_;
//	Date borrowed_;
//	Date due_;
//	bool isLoaned_;
int LibraryBook::getId()
{
    return id_;
}
void LibraryBook::setId(int idIN)
{
    id_ = idIN;
}
void LibraryBook::setBook(Book bookIn)
{
    book_ = bookIn;
}
Book LibraryBook::getBook()
{
    return book_;
}
void LibraryBook::setBorrower(Name nameIn)
{
    borrower_ = nameIn;
}
Name LibraryBook::getBorrower()
{
    return borrower_;
}
void LibraryBook::setBorrowed(Date dateIn)
{
    borrowed_ = dateIn;
}
Date LibraryBook::getBorrowed()
{
    return borrowed_;
}
void LibraryBook::setDue(Date dateIn)
{
    due_ = dateIn;
}
Date LibraryBook::getDue()
{
    return due_;
}
void LibraryBook::setLoan(bool loanIn)
{
    isLoaned_ = loanIn;
}
bool LibraryBook::getLoan()
{
    return isLoaned_;
}
void LibraryBook::display()
{
    book_.display();
    cout << endl << "Book number  >     " << getId() << endl;
    cout << endl << "Checked out  >     " << getLoan() << endl;
    borrowed_.display();
    borrower_.display();
    due_.display();
}
void LibraryBook::destroy()
{
    LibraryBook *mem = nullptr;

    delete mem;
}
















































