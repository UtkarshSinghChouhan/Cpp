//EXAMPLE 1. To Understand Pointer to Object and the Arrow Operator.

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real, img;
// public:
//     void setData()
//     {
//         int a,b;
//         cout<<"Enter the value of the real part : "<<endl;
//         cin>>a;

//         cout<<"Enter the value of the imginary part : "<<endl;
//         cin>>b;

//         real = a;
//         img = b;
//     }

//     void getData()
//     {
//         cout<<"The complex number is : ["<<real<<"+ i("<<img<<")]"<<endl;
//     }
// };

// int main(){
//     Complex c1;
//     Complex *ptr = &c1;

//     ptr->setData();
//     ptr->getData();

//     return 0;
// }


//SAME EXAMPLE 1.2

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real, img;
// public:
//     void setData()
//     {
//         int a,b;
//         cout<<"Enter the value of the real part : "<<endl;
//         cin>>a;

//         cout<<"Enter the value of the imginary part : "<<endl;
//         cin>>b;

//         real = a;
//         img = b;
//     }

//     void getData()
//     {
//         cout<<"The complex number is : ["<<real<<"+ i("<<img<<")]"<<endl;
//     }
// };

// int main(){
//     Complex c1;
//     Complex *ptr = &c1;

//     c1.setData();
//     c1.getData();

//     return 0;
// }


//SAME EXAMPLE 1.3

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real, img;
// public:
//     void setData()
//     {
//         int a,b;
//         cout<<"Enter the value of the real part : "<<endl;
//         cin>>a;

//         cout<<"Enter the value of the imginary part : "<<endl;
//         cin>>b;

//         real = a;
//         img = b;
//     }

//     void getData()
//     {
//         cout<<"The complex number is : ["<<real<<"+ i("<<img<<")]"<<endl;
//     }
// };

// int main(){
//     Complex c1;
//     Complex *ptr = &c1;

//     (*ptr).setData();  //Here we need to enclose *ptr in brackets because the precedence of '.' is greater than '*'.
//     (*ptr).getData();

//     return 0;
// }

//SAME EXAMPLE 1.4

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real, img;
// public:
//     void setData()
//     {
//         int a,b;
//         cout<<"Enter the value of the real part : "<<endl;
//         cin>>a;

//         cout<<"Enter the value of the imginary part : "<<endl;
//         cin>>b;

//         real = a;
//         img = b;
//     }

//     void getData()
//     {
//         cout<<"The complex number is : ["<<real<<"+ i("<<img<<")]"<<endl;
//     }
// };

// int main(){

//     Complex *ptr = new Complex;   //Here we are dynamically creating the pointer of the nameless object of the class Complex

//     ptr->setData();
//     ptr->getData();

//     return 0;
// }

