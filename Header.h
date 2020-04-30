// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class

#ifndef Header_h
#define Header_h

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <stdlib.h>

using std::string;

void showProgramMenu();
void askForChoice(int&,string&);
void askForWeight(int&);
string getWholesalerName(int);
double getShippingRate(int);
double getPricePerPound(int);
double shippingCalc(double,int);
double totalPrice(double, int, double&, double);
void printTheInvoice(int, string, double, double);

#endif

