#include <iostream>
using namespace std;
class mobile
{
public:
    void playRingTone()
    {
        cout << "mobile ring tone" << endl;
    }
};
class samsung : public mobile
{
    void playRingTone()
    {
        cout << "samsung ring tone" << endl;
    }
};

class realme : public mobile
{
    void playRingTone()
    {
        cout << "real me ringtone" << endl;
    }
};
int main()
{
    mobile *mptr;
    samsung s1;
    mptr = &s1;
    mptr->playRingTone();
    return 0;
}