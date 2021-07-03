// assgn_st.cpp assigning structue.
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
    inflatable pal;
    pal=guest;
    cout<<"Expand your guest list with "<<guest.name<<endl;
    cout<<" and "<<pal.name<<"!\n";
//    guest={"tag",2.0,39.91};
    cout<<"Expand your guest list with "<<guest.name<<endl;
    return 0;
}
