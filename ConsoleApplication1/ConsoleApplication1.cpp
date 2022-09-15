

#include <iostream>

using namespace std;

int main()
{
    string some_name;
    cout << "Hello World!\n";
    cin >> some_name;
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
