// address.cpp -- using the & operator to find addresses
#include <iostream>
int main()
{
    using namespace std;
    int donuts=6;
    double cups=4.5;
    cout<<"Donuts value "<<donuts<<endl;
    cout<<" and donuts address "<<&donuts<<endl;
    cout<<"Cups value "<<cups<<endl;
    cout<<" and cups address "<<&cups<<endl;
    return 0;
}