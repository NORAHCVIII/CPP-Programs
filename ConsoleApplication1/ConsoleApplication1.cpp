/*
If i add some code i need to commit it first


*/

#include <iostream>
//Names given to parts of code to help reduce naming conflicts ===== std ===== is a C++ 'standart' namespace 
using namespace std;
// ==== :: ==== is a scope resolution operator

//All cpp files needs main one main function with or without arguments
int main()
{
    //Simple string variable  char type
    string some_name;

    //Stream out 
    cout << "Hello World!\n";

    //Stream in (to write something in console)
    cin >> some_name;

    //Standart bool UE logic (if/elif/else)
    if (some_name == "Karl")
    {
        cout << "How did you know that?"<<endl;
    }
    else
    {
        cout << "Hello " + some_name << endl;
    }
    
    system("pause");
    return 0;

}
