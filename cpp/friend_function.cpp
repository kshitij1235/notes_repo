#include <iostream>
using namespace std;
class roll_no
{

    int roll = 10;
     friend void storage();
};
void storage()
{
    roll_no a1;
    cout << "the priavte roll no is : " << a1.roll;
}
int main()
{
    storage();
    return 0;
}