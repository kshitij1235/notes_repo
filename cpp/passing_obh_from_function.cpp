#include <iostream>
using namespace std;
class emp
{

public:
    int id, salary;
    emp get(int id, int salary)
    {
        emp x;
        x.id=id;
        x.salary=salary;
        return x; 
    }
    void display()
    {
        cout << "your id is : " <<id<<endl;
        cout << "your salary is : " <<salary;
    }
};

int main()
{
    emp e1;
    e1=e1.get(3, 200000);
    e1.display();
    return 0;
}