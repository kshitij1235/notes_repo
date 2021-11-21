#include <iostream>
using namespace std;

class roll_no
{
public:
    int roll_no;
    void get();
    void display();
};
void roll_no ::get()
{
    cout << "enter your roll no : ";
    cin >> roll_no;
}
void roll_no ::display()
{
    cout << "your roll no is : " << roll_no;
}
int main()
{

    roll_no s1;
    s1.get();
    s1.display();
    return 0;
}