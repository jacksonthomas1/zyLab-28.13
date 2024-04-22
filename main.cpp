#include <iostream>
#include<string>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   string itemName1; 
   int itemPrice1; 
   int itemQuantity1; 
   
   cout << "Item 1" << endl; 
   cout << "Enter the item name:" << endl; 
   cin >> itemName1; 
   
   cout << "Enter the item price:" << endl; 
   cin >> itemPrice1; 
   
   cout << "Enter the item quantity:" << endl; 
   cin >> itemQuantity1;
   
   ItemToPurchase item1(itemName1, itemPrice1, itemQuantity1);
   
   string itemName2; 
   int itemPrice2; 
   int itemQuantity2; 
   
   cout << endl; 
   
   cout << "Item 2" << endl; 
   cout << "Enter the item name:" << endl; 
   cin >> itemName2; 

   cout << "Enter the item price:" << endl; 
   cin >> itemPrice2; 
 
   cout << "Enter the item quantity:" << endl; 
   cin >> itemQuantity2;

   ItemToPurchase item2(itemName2, itemPrice2, itemQuantity2); 
   
   int totalPrice;  
   
   totalPrice = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());
   
   
   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @  $" << item1.GetPrice() << " =  $" << item1.GetPrice() * item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @  $" << item2.GetPrice() << " =  $" << item2.GetPrice() * item2.GetQuantity() << endl;
   cout << "Total: $" << totalPrice;
   
   return 0;
}

