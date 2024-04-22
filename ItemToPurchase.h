#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>
using namespace std;

class ItemToPurchase { 
   public: 
   ItemToPurchase(string newItemName, int newItemPrice, int newItemQuantity); 
   void SetName(string newName); 
   string GetName(); 
   void SetPrice(int newPrice); 
   int GetPrice(); 
   void SetQuantity(int newQuantity); 
   int GetQuantity();
   
   private: 
   string itemName; 
   int itemPrice; 
   int itemQuantity;
};

#endif
