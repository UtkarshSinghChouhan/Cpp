#include <iostream>
using namespace std;

class Father
{
public:
    virtual void getDetails() = 0;

    Father()
    {
        cout << "Father"
             << " ";
    }
};

class Child : public Father
{
public:
    Child()
    {
        cout << "child"
             << " ";
    }

    void getDetails()
    {
        cout << "From Father";
    }
};

int main()
{
    Child c1;
    c1.getDetails();
    return 0;
}