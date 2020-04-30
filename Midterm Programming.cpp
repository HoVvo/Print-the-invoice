// Midterm Programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class

/*Pseudocode 
  * Create variables >> int userChoice weigt, string wholesalerName, double shippingRate pricePerPound; 
  * Call function showProgramMenu()
                        Display "Large Peanut Butter Cups" 
                        Display "Wholesalers:" << endl;
                        Display "1. Addicted to Chocolate" 
                        Display "2. Chocolate R Us" 
                        Display "3. Candy is Dandy" 

  * Call function askForChoice(serChoice, wholesalerName)
                        do
                          Display  "Enter selection: " 
                          Ask for userChoice;
                          switch on userChoice
                            Match  1:
                            Match  2:
                            Match  3:
                               wholesalerName = getWholesalerName(userChoice);
                            No match:
                            Display "Invalid selection!"
                        while userChoice less than 0 or userChoice greater than 4

  * shippingRate = getShippingRate(userChoice)
                     create variable double ShippingRate[] = { 1.49, 1.68, 1.86 };
                     return ShippingRate[userChoice - 1];
  * pricePerPound = getPricePerPound(userChoice)
                     create variable double PricePerPound[] = { 7.49, 7.83, 7.97 };
                     return PricePerPound[userChoice - 1];

  * Call function askForWeight(weight)
                     do
                       Display "How many pounds are bought (whole numbers only): "
                       Ask for weight;
                       if weight weight less than or equal 0
                           Display  "Invalid weight" 
                     while weight less than or equal 0

  * Call function printTheInvoice(weight, wholesalerName, shippingRate, pricePerPound);
                     Create variable double finalPrice;
                     display setprecision(2) and fixed;
                     display    "Ship to "  wholesalerName 
                     display       "Shipping"     "$ "  shippingCalc(shippingRate,weight) 
                     display       "Weight"       weight " lbs" 
                     display       "Price "       "$ "  totalPrice(pricePerPound,weight, finalPrice, shippingRate) 
                     display       "Total"        "$ "  finalPrice 
*/

#include "Header.h"

using namespace std;

int main()
{
    int userChoice, weight;
    string wholesalerName;
    double shippingRate, pricePerPound; 
    
    showProgramMenu();

    askForChoice(userChoice, wholesalerName);
    shippingRate = getShippingRate(userChoice);
    pricePerPound = getPricePerPound(userChoice);
    
    askForWeight(weight);

    printTheInvoice(weight, wholesalerName, shippingRate, pricePerPound);

    return 0;
}

