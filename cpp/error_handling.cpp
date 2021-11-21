#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cout << "enter your age : ";
    cin >> x;
    try
    {
        cout << "you entered the try" << endl;
        if (x < 18)
        {
            throw x;
            cout << "execptional threw " << endl;
        }
        else
        {
            cout << "test sucessfull" << endl;
        }
    }
    catch (int x)
    {
        cout << "erroe 101 : your age is small" << endl;
    }

    return 0;
}