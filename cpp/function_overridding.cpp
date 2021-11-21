#include <iostream>
using namespace std;
class base
{
public:
   void show()
   {
      cout << "class_base" << endl;
   }
};

class derived : public base
{
public:
   void show()
   {
      cout << "class_derived" << endl;
   }
};

int main()
{
   base b;
   derived d;
   b.show();
   d.show();
   return 0;
}