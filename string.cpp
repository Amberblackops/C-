#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "amber";
    cout << "the name is " << name << endl;
    cout << "the name is " << name.length() << endl;
    cout << "the name is " << name.substr(2, 3) << endl;

    return 0;
}