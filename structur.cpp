// structur -- a simple structure.
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guest={"Flag",1.0,29.9};
    inflatable pal={"hook",22.1,29.9};
    cout<<"Expand your guest list with "<<guest.name<<endl;
    cout<<" and "<<pal.name<<"!\n";
    cout<<"You can have both for $"<<guest.price+pal.price<<"!\n";
    return 0;
}
