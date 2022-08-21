#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {  
   itemName = "none";         
   itemPrice = 0; 
   itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string itemName, int itemPrice, int itemQuantity) {  
   this->itemName = itemName;         
   this->itemPrice = itemPrice;
   this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetName(string itemName) {
   this->itemName = itemName;
}

void ItemToPurchase::SetPrice(int itemPrice) {
   this->itemPrice = itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
   this->itemQuantity = itemQuantity;
}

string ItemToPurchase::GetName() {
   return itemName;
}

int ItemToPurchase::GetPrice() {
   return itemPrice;
}

int ItemToPurchase::GetQuantity() {
   return itemQuantity;
}
