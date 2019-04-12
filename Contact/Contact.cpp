#include "Contact.h"
#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Contact::Contact(string n, string p, string e, string a){
    setName(n);
    setPhone(p);
    setEmail(e);
    setAddress(a);
}

Contact::Contact() {
    setName("default");
    setAddress("default");
    setPhone("1234567890");
    setEmail("default@qmail.cuny.edu");
}

//Accessor
string Contact::getName(){
	return name;
}
string Contact::getAddress(){
    return address;
}
string Contact::getPhone(){
    return phone;
}
string Contact::getEmail(){
    return email;
}

//Mutator
void Contact::setName(string n){
	name = n;
}
void Contact::setAddress(string a){
    address = a;
}
void Contact::setPhone(string p){
    if (p.length() != 10){
        cout << "Incorrect phone number length.\n";
        exit(1);
    }
    else {
        for (int i = 0; i < p.length(); i++){
            if (!isdigit(p[i])) {
                cout << "Phone number contains non-digit.\n";
                exit(1);

            }
        }
    }
    phone = p;
}
void Contact::setEmail(string e){
    int atPos = (int) e.find("@");
    int dotPos = (int) e.rfind(".");
    if (atPos == -1 || dotPos == -1 || dotPos < atPos){
        cout << "Incorrect e-mail.\n";
        exit(1);
    }
    email = e;
}

void Contact::output(){
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone number: " << phone << endl;
    cout << "E-mail: "<< email << endl;    
}
