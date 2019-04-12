#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address(){ //default
	home = "";
	street = "";
	apt = "";
	city = "";
	state = "";
	zip = "";
}

string Address::getStreet(){
	return street;
}
string Address::getApt(){

     return apt;

}

string Address::getCity(){

     return city;

}

string Address::getHome(){

     return home;

}

string Address::getState(){
	return state;
}

string Address::getZip(){
	return zip;
}

void Address::output(){

cout << home + ", " + street + ", " + apt + ", " + city + ", " + state + ", " + zip;

}

void Address::input(){
	
}

