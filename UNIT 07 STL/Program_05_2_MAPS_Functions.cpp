// NOTE: 
// All of these function works for almost every containers like vectors, maps, sets etc.


#include<bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m1)
{
    cout<<"Size : "<<m1.size()<<endl;

    for(auto &pr : m1)    //Note that here we have used 'auto' keyword instead of using the entire declaraton of the iterator 'it'.
    {                     //And Range-based loop. Further note that we have used the reference of the pair 'pr' to avoid copying the values of the pair.
        cout<<pr.first<<" "<<pr.second<<endl;       
    }
}

int main()
{
    //1. Functions in Maps:
    map<int, string>  m;

    //For "Insertion Operation".
    m.insert({1,"abc"});
    m.insert({15,"prq"});
    m.insert({6,"ubvw"});
    m.insert({8,"ubsdw"});
    m.insert({10,"scbvw"});
    printMap(m);


     
    //2. "Find-Operation", finding value corresponding to a paticular 'Key'.
    // auto it = m.find(15);       //this function returns the iterator pointing to the address where the 'value' corresponding to the 'key' is stored.
    auto it = m.find(22);          //In case if the value corresponding to the given 'key' doesn't exists,then the function returns the iterator pointing memory address after the last-element of the map (i.e. m.end()).
                                   //Further note that the Time-Complexity of the find() function is O(log(n)).
    if(it == m.end())
    {
        cout<<"No Value Available"<<endl;
    }

    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }




    // 3. "Erase-Operation", this function erases the "Key-Value" pair.

        //3.1 Method-01 : Either we can pass the 'Key' as an argument to the function.
                        m.erase(15);
                        printMap(m);
        
        //3.2 Method-02 : Or we can pass the 'iterator' to the function whose value we want to delete.
                        auto it1 = m.find(10);
                        m.erase(it1);
                        printMap(m); 

        
        // Further note that if we are trying to erase something which don't exists,then in that case the will give "Segmentation-Error",
        // to avoid this error we use following method.
            auto it2 = m.find(30);
            if(it2 == m.end())
            {
                cout<<"No value Exists!!!"<<endl;
            }
            else
            {
                m.erase(it2);
                printMap(m);
            }


        //4. Clear-Operation : To clear the entire map.
        m.clear();
        printMap(m);

    return 0;
}