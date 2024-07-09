#include <string>
#include <iostream>
using namespace std;
class clsPerson
{
private:
    string _firstName;
    string _lastName;
    string _email;
    int _phone;
public:
    clsPerson(string FirstName, string LastName, string Email, int Phone){
        _firstName = FirstName;
        _lastName = LastName;
        _email = Email;
        _phone = Phone;
    };

    // FirstName
    void setFirstName(string FirstName){
        cout<<"enter you firstName "<<endl;
        cin>>FirstName;
         _firstName = FirstName;
    }
    string getFirstName(){
        return _firstName;
    }
    // LastName
    void setLastName(string LastName){
        cout<<"enter you lastName "<<endl;
        cin>>LastName;
         _lastName = LastName;
    }
    string getLastName(){
        return  _lastName;
    }
    void setEmail(string Email){
        cout<<"enter you Email "<<endl;
        cin>>Email;
         _email = Email;
    }
    string getEmail(){
        return  _email;
    }
    void setphone(int Phone){
        cout<<"enter you number Phone "<<endl;
        cin>>Phone;
         _phone = Phone;
    }
    int getphone(){
        return  _phone;
    }

    string FullName()
    {
        return _firstName + " " + _lastName;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nFirstName: " << _firstName;
        cout << "\nLastName : " << _lastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _email;
        cout << "\nPhone    : " << _phone;
        cout << "\n___________________\n";

    }

};

