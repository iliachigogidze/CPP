#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello, world";
    cout << "Str = " << str << endl;
    str.at(0) = 'H';
    cout << "Str = " << str << endl;
    return 0;    
}