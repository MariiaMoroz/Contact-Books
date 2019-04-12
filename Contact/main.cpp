#include "Contact.h"
#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

void displayAllContact(Contact *myContBook,int cnt){

     cout<<"My Contact Book:"<<endl;

     cout<<"-------------------------------"<<endl;

    	for(int kk = 0; kk < cnt; kk++){
    		myContBook[kk].output();
		}

     cout<<"-------------------------------"<<endl;

}

void searchContact(Contact *myContBook,int cnt, string name){

     int gf=0;

     for(int kk=0;kk<cnt;kk++){
     	
          if(myContBook[kk].getName().compare(name)==0){
              myContBook[kk].output();

              gf=1;
              break;

          }

     }

     if(gf==0){

          cout<<"Contact not found"<<endl;
     }
}

int main(){

    Contact myContBook[10];

     string name;
     string phone;
     string email;
     string address;

     int cnt=0;
     int ch=0;
     int usRepChoice=1;

     for(int kk=0;kk<10;kk++){
            
    cout << "Please enter the Name: " << endl;
    cin >> name;
    
    cout << "Please enter the phone number: " << endl;
    cin >> phone;
    
    cout << "Please enter the e-mail: " << endl;
    cin >> email;
    
    cin.ignore();
    cout << "Please enter the address: " << endl;
    getline(cin, address);
          
    myContBook [kk]= Contact(name, phone, email, address);
		cnt++;
		
cout << "Do you wish to enter another person details?(1:YES/2:NO)" << endl;

          cin >> usRepChoice;

          if(usRepChoice==2)

              break;

     }

     while(1){

         cout << "What would you like to do? \n"
                 << "1. Search Contacts \n"
                 << "2. Display all Contacts \n"
                 << "3. Exit Program \n";
            cin >> ch;
            cout << "\n";
          switch(ch){

          case 1:

              cout<<"Enter your name: "<<endl;

              cin >> name;

              searchContact(myContBook, cnt, name);

              break;

          case 2:

              displayAllContact(myContBook,cnt);

              break;

          case 3:

              return 0;

              break;

          default:

              cout<<"Invalid choice"<<endl;

          }//switch

          cout<<"Would you like to go back? \n"<<endl;
          cout << "1:Yes" << endl;
          cout << "2:No" << endl;

          cin>>usRepChoice;

          if(usRepChoice==2)

              break;

     }//while

     return 0;

}//main
