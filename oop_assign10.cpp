#include <iostream>
#include <string>
using namespace std;

// Function Template
template <class T>
void displayValue(T value)
{
    cout << "Value: " << value << endl;
}

// Class Template
template <class T>
class Box
{
private:
    T data;

public:
    Box(T value)
    {
        data = value;
    }

    void display()
    {
        cout << "Box contains: " << data << endl;
    }
};

int main()
{
    cout << "Function Template:" << endl;

    displayValue(10);
    displayValue(5.5);

    cout << "\nClass Template:" << endl;

    Box<int> b1(100);
    Box<string> b2("Hello C++");

    b1.display();
    b2.display();

    return 0;
}