// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class

#include "Header.h"

using namespace std;

void showProgramMenu()
{
    cout << "Large Peanut Butter Cups" << endl;
    cout << "Wholesalers:" << endl;
    cout << "1. Addicted to Chocolate" << endl;
    cout << "2. Chocolate R Us" << endl;
    cout << "3. Candy is Dandy" << endl;
}

void askForChoice(int& userChoice, string& wholesalerName)
{
    do
    {
        cout << "Enter selection: " ;
        cin >> userChoice;
        switch (userChoice)
        {
        case 1:
        case 2:
        case 3:
            wholesalerName = getWholesalerName(userChoice);
            break;
        default:
            cout << "Invalid selection!" << endl;
            break;
        }
    } while (userChoice < 0 || userChoice > 4);
}

void askForWeight(int& weight)
{
    do
    {
        cout << "How many pounds are bought (whole numbers only): ";
        cin >> weight;
        if (weight <= 0)
        {
            cout << "Invalid weight" << endl;
        }

    } while (weight <= 0);
}

string getWholesalerName(int userChoice)
{
    string Wholesaler[] = { "Addicted to Chocolate", "Chocolate R Us", "Candy is Dandy" };
    return Wholesaler[userChoice-1];
}

double getShippingRate(int userChoice)
{
    double ShippingRate[] = { 1.49, 1.68, 1.86 };
    return ShippingRate[userChoice - 1];
}

double getPricePerPound(int userChoice)
{
    double PricePerPound[] = { 7.49, 7.83, 7.97 };
    return PricePerPound[userChoice - 1];
}

double shippingCalc(double shippingRate, int weight)
{
    if (weight > 5)
    {
        return (5 * shippingRate);
    }
    else
    {
        return (weight * shippingRate);
    }
    
}

double totalPrice(double pricePerPound, int weight, double& totalPrice, double shippingRate)
{
    double price;
    price = (weight * pricePerPound);
    totalPrice = shippingCalc(shippingRate, weight) + price;
    return price;
}

void printTheInvoice(int weight, string wholesalerName, double shippingRate, double pricePerPound)
{
    double finalPrice;
    cout << setprecision(2) << fixed;
    cout << setw(10) << "Ship to " << wholesalerName << endl;
    cout << setw(15) << "Shipping " << setw(12) << "$ " << shippingCalc(shippingRate,weight) << endl;
    cout << setw(13) << "Weight " << setw(13) << weight <<" lbs" << endl;
    cout << setw(12) << "Price " << setw(15) << "$ " << totalPrice(pricePerPound,weight, finalPrice, shippingRate) << endl;
    cout << setw(12) << "Total " << setw(15) << "$ " << finalPrice << endl;
}


