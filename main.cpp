#include <string>
#include <iostream>
#include "./clsPerson.cpp"
using namespace std;
int main()
{
    string Fname, Lname, Email;
    int Phone;
    clsPerson Person(Fname, Lname, Email ,Phone);
    Person.setFirstName(Fname);
    Person.setLastName(Lname);
    Person.setEmail(Email);
    Person.setphone(Phone);
    cout<<Person.FullName();
    Person.Print();
    

    return 0;
}
