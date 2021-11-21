#include <iostream>
using namespace std;
class ABC
{
    int id;

public:
    void get()
    {
        cout <<"Enter your ID : ";
        cin >> id;
        cout<<""<<endl;

    }
    void display()
    {
        cout <<"The ID is : "<< this->id;
    }
};

int main()
{
    ABC a;
    a.get();
    a.display();
    return 0;
}
