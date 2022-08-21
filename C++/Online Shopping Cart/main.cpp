#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
 
   string itemName1, itemName2;
   int itemPrice1, itemQuantity1, itemPrice2, itemQuantity2;
 
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName1);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice1;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity1;
   cin.ignore();
   cout << endl << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName2);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice2;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity2;
   cin.ignore();
   
   ItemToPurchase item1 = ItemToPurchase(itemName1, itemPrice1, itemQuantity1);
   ItemToPurchase item2 = ItemToPurchase(itemName2, itemPrice2, itemQuantity2);
   
   cout << endl << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;
   cout << endl <<"Total: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity()) << endl;
   
   return 0;
}
