#include <iostream>
using namespace std;

struct book
{
    int id;
    string name;
    int total_quantity;
    int total_borrowed;

    book()
    {
        id = -1;
        name = "";
        total_quantity = total_borrowed = 0;
    }
};

void menu()
{
    cout << "Library menu;\n";
    cout << "1. Add a book\n";
    cout << "2. Borrow a book\n";
    cout << "3. Return a book\n";
    cout << "4. Search in books by prefix\n";
    cout << "5. Print all books by id\n";
    cout << "6. Print all books by name\n";
    cout << "7. Print who borrowed a spacific book\n";
    cout << "8. Add a new user\n";
    cout << "9. Print all users\n";
    cout << "4. Exit\n";
}

int main()
{

    return 0;
}