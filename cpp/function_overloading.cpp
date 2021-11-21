#include <iostream>
using namespace std;

int add(int a, int b, int c);
int add(int a1, int b2);
int main()
{
    int k;
    k = add(1, 2, 3);
    cout << "our triple func executed : " << k << endl;
    k = add(1, 2);
    cout << "our duplet func executed : " << k << endl;
    return 0;
}

int add(int a, int b, int c)
{
    return a + b + c;
}
int add(int a1, int b2)
{
    return a1 + b2;
}
