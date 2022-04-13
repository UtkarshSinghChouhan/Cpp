// Whenever we are creating a variable using the "new" operator weather of type user-defined(i.e., objects) or primary (i.e., int, float, char etc) or derived (i.e., arrays)
// we need to delete that variable from the memory using the "delete" keyword otherwise the in-built destructor is not called automatically.

//     It means whenever we are dynamically creating a variable using the "new" operator we need to delete that variable using the "delete" keyword.In this case the destructor 
//     provided by the compiler is not called automatically, therefore we need to call the destructor using the "delete" keyword.

#include<iostream>
using namespace std;

int main(){

    // //Revising Pointers
    int a = 4;
    int* ptr1 = &a;

    cout<<"The value of a is : "<<*ptr1<<endl;
    cout<<"The address of a is : "<<ptr1<<endl;

    cout<<"**********************************************************************"<<endl;

    //'new' Keyword

    cout<<"----------NEW KEYWORD USAGE----------"<<endl;

    int* ptr2 = new int(2);     //It means we have created a pointer 'ptr2' for a nameless variable of 'int' type whose value is '2'.
    cout<<"The value whose address does the pointer ptr2 stores is : "<<*ptr2<<endl;
    cout<<"The value of the pointer ptr2 is : "<<ptr2<<endl;

    cout<<"**********************************************************************"<<endl;

    int* ptr3  = new int[3];   //It means we have created a pointer(ptr3) which stores the address
    ptr3[0] = 1;               //of the index '0' nameless element of an array of type 'int' and size '3'.
    ptr3[1] = 2;
    ptr3[2] = 3;

    cout<<"The value at index 0 of the array is : "<<ptr3[0]<<endl;
    cout<<"The address of the index 0 of the array is : "<<ptr3<<endl;
    cout<<"\nThe value at index 1 of the array is : "<<ptr3[1]<<endl;
    cout<<"The address of the index 1 of the array is : "<<(ptr3+1)<<endl;  //The address of the contiguous memory-blocks can be obtained using the pointer-arithmetic.
    cout<<"\nThe value at index 2 of the array is : "<<ptr3[2]<<endl;
    cout<<"The address of the index 2 of the array is : "<<(ptr3+2)<<endl;  //The address of the contiguous memory-blocks can be obtained using the pointer-arithmetic.



    cout<<"**********************************************************************"<<endl;

    // 'delete' keyword

    cout<<"----------DELETE KEYWORD USAGE----------"<<endl;

     delete[] ptr3;    //Syntax to delete the values stored in the array.
    cout<<"The value at index 0 of the array is : "<<ptr3[0]<<endl;      //Since we have cleared the value stored at this memory-block, hence it will throw garbage value.
    cout<<"The address of the index 0 of the array is : "<<ptr3<<endl;   //Further note that the address of this memory-block does not get affected.
    cout<<"The value at index 1 of the array is : "<<ptr3[1]<<endl;
    cout<<"The address of the index 1 of the array is : "<<(ptr3+1)<<endl;
    cout<<"The value at index 2 of the array is : "<<ptr3[2]<<endl;
    cout<<"The address of the index 2 of the array is : "<<(ptr3+2)<<endl;

    cout<<"----------------------------------------------------------------------"<<endl;


    delete ptr2;
    cout<<"The value whose address does the pointer ptr2 stores is : "<<*ptr2<<endl; //Since we have cleared the value stored at this memory-block, hence it will throw garbage value.
    cout<<"The value of the pointer ptr2 is : "<<ptr2<<endl;                         //Further note that the address of this memory-block does not get affected.






    return 0;
}

/*
NOTE:

    1. The data-type of the pointer will be corresponding to the data-type of the variable whose
       address it stores. It means if the variable is 'int' type then its pointer will be of 'int*'
       type.

    2. For example, if an array is like arr[5], then symbol arr[0] gives the value stored at the
                    memory-block at index 0 whereas the symbol arr gives the address of the
                    memory-block at index 0.

       On the other hand, if a pointer is like int *ptr = &a, then the symbol ptr (or &a) gives the
                          address of the memory-block which stores the value of variable 'a' whereas
                          the symbol *ptr [or *(&a)] gives the value of the variable(i.e., a) whose
                          address does the pointer stores.
*/







