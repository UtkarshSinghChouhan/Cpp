//Use of Exception in template-class.

#include<iostream>
using namespace std;

template<class T>
class Check
{
public:
    T num;
    Check(T x) 
    {
        num = x;
    } 

        
    void test()
    {
        try
        {
            throw num;
        }

        catch(int a)
        {
            cout<<"The interger that U have entered is : "<<num<<endl;
        }

        
        catch(char b)
        {
            cout<<"Error 404 : Character value "<<num<<" is not allowed"<<endl;
        }

        
        catch(double b)
        {
            cout<<"Error 404 :  Floating value "<<num<<" is not allowed"<<endl;
        }     
    }
};

int main()
{
    Check<int> obj1(4); 
    obj1.test();

    Check<char> obj2('A');   
    obj2.test();  

    Check<double> obj3(1.5);   
    obj3.test();  

    return 0;
}