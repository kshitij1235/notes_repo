#include<iostream>
using namespace std;

int main ()
{
    int a[]={2,3,45,6,7},key,i;
    cout<<"enter a number to be searched : \n";
    cin>>key;

    for ( i = 0; i < 5; i++)
    {
        if(a[i]==key)
        {
        cout<<key<<" is present at postiton "<<i;
        break;
        }
    }
    if(i==5)
    {
        cout<<key<<" is not presert in the given array";
    }
    return 0;
}