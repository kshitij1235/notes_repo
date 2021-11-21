#include <iostream>
using namespace std;

class students
{
    int num;

public:
    static int count;
    void data();
    void increment();
 
};
int students::count;
void students::data()
{
        cout<< "enter any number and we will count it "<< endl;
        while (true)
        {
            cout << "enter a number : ";
            cin >> num;
            increment();
            cout<< "the value of static data member is : " << students::count<<endl;
        }
    };

void students:: increment()
{
        students::count++;
}
int main()
{
    students s1;
    s1.data();
    return 0;
}