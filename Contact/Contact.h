#ifndef _CONTACT_H
#define _CONTACT_H
#include<string>
#include "Address.h"
using namespace std;

class Contact{

private:
     string name;
     string address;
     string phone;
     string email;

public:
     Contact();
	void output();
    

	Contact(string n, string a, string p, string e);
     void setName(string name);
     void setPhone(string phone);
     void setEmail(string email);
     void setAddress(string Address);

    

     string getName();
     string getPhone();
     string getEmail();
     string getAddress();
     
};

#endif
