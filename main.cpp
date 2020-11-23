/******************************************************************************

Bridget Naylor 
Lab Section: Lab 12

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std;

class person
{
    private:
        string firstName;
        string lastName;
        int id;
    public:
        person( string last, string first, int ID );
};

int main()
{
    person* ptrP1 = new person("KuangThu", "Bruce", 4157300);

    person* ptrP2 = new person("Deauville", "William", 8435150);

    person* ptrP3 = new person("Wellington", "John", 9207404);

    person* ptrP4 = new person("Bartoski", "Peter", 6946473);

    person* ptrP5 = new person("Fredericks", "Roger", 7049982);

    person* ptrP6 = new person("McDonald", "Stacey", 7764987);

    person* ptrP7 = new person("KuangThu", "Bruce", 4157300);

    person* ptrP8 = new person("Deauville", "William", 8435150);

    return 0;
}


person::person( string last, string first, int ID )
{
    lastName = last;
    firstName = first;
    id = ID;
}
