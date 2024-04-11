#include <iostream>
#include <ios>
#include <limits>
using namespace std;

#include "ItemToPurchase.h"

int main() {

ItemToPurchase item1;
ItemToPurchase item2;
string itemName;
double itemPrice;
int itemQuantity;
double total = 0;

    cout << "Item 1" << endl;
    cout << "Enter the item name: " << endl;
     getline(cin, itemName); 
    cout <<  "Enter the item Price: " << endl;
     cin >> itemPrice;
    cout << "Enter the item Quantity: " << endl; 
     cin >> itemQuantity;
     item1.SetName(itemName);
     item1.SetPrice(itemPrice);
     item1.SetQuantity(itemQuantity);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

     cout << "Item 2" << endl;
     cout << "Enter the item name: " << endl;
        getline(cin, itemName);
     cout << "Enter the item Price: " << endl;
        cin >> itemPrice;
     cout << "Enter the item Quantity: " << endl;
        cin >> itemQuantity;

    item2.SetName(itemName);
    item2.SetPrice(itemPrice);
    item2.SetQuantity(itemQuantity);


   cout << "TOTAL COST" << endl;



    cout << item1.GetName() << " ";
    cout << item1.GetQuantity() << " @ $";
    cout << item1.GetPrice() << " = $";
    cout << item1.GetQuantity() * item1.GetPrice() << endl;
    total += item1.GetQuantity() * item1.GetPrice(); 
    cout << item2.GetName() << " ";
    cout << item2.GetQuantity() << " @ $";
    cout << item2.GetPrice() << " = $";
    cout << item2.GetQuantity() * item2.GetPrice() << endl; 
    total += item2.GetQuantity() * item2.GetPrice();  
    cout << endl << "Total: $" << total << endl;

   return 0;
}
