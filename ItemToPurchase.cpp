#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

void ItemToPurchase::SetName(string newName) {
    itemName = newName;
}

string ItemToPurchase::GetName() {
    return itemName;
}
    
void ItemToPurchase::SetPrice(double newPrice) {
    itemPrice = newPrice;
}

double ItemToPurchase::GetPrice() {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int newQuantity) {
    itemQuantity = newQuantity;
}

int  ItemToPurchase::GetQuantity() {
    return itemQuantity;
}
