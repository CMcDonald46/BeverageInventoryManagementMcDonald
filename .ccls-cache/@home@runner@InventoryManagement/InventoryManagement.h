//Header File for Inventory Management
#ifndef INVENTORYMANAGEMENT_H
#define INVENTORYMANAGEMENT_H
#include <iostream>

using namespace std;

// First Part should be function prototypes.
void showMenu();
void addItem();
void deleteItem();
void updateItem();
void displayItem();
void displayPerpInventory();
void clearScreen();

class Item {
// Private Item's can not be changed by user.
private:
  string itemName;
  double itemQuantity;
  double itemPrice;
  int itemType;
public:
// Mutators or Setters
void setItemName(string name);
void setItemQuantity(double quantity);
void setItemPrice(double price);
void setItemType(int type);
// Accessors or Getters
string getItemName const{return itemName;}
double getItemQuantity{};
double getItemPrice();
int getItemType();
};

void showMenu() {
cout << "Carson's Beverage Inventory Management System" << endl;
cout << "1. Add Item" << endl;
cout << "2. Delete Item" << endl;
cout << "3. Update Item" << endl;
cout << "4. Display Item" << endl;
cout << "5. Display Perpetual Inventory" << endl;
cout << "6. Exit" << endl;
cout << "7. Clear Screen" << endl;
cout << "Enter your choice: Please enter an integer between 1 and 7 : " << endl;
}
void clearScreen(){
  cout << "\033[2J\033[1;1H";
}
void menuOption(int choice){
  if (choice == 1) {
    addItem();
  }
  else if(choice == 2) {
    deleteItem();
  }
  else if(choice == 3) {
    updateItem();
  }
  else if(choice == 4) {
    displayItem();
  }
  else if(choice == 5) {
    displayPerpInventory();
  }
  else if(choice == 6){
    cout << "Thank you for using the Inventory Management System" << endl;
  }
  else if(choice == 7)
    void clearScreen();
}
void addItem(){
  string nameLocal = 0;
  double quantityLocal = 0.0;
  double priceLocal = 0.0;
  int typeLocal = 0;
  
  Item newItem;
  cout << "Enter the name of the item: " << endl;
  cin >> nameLocal;
  newItem.setItemName(nameLocal);
  cout << "Enter the quantity of the item: " << endl;
 cin >> quantityLocal;
  newItem.setItemQuantity(quantityLocal);
  cout << "Enter the price of the item: " << endl;
  cin >> priceLocal;
  newItem.setItemPrice(priceLocal);
  cout << "Enter the type of the item: 1. Liquor 2. Wine 3. NA Beverage 4. Beer 5. Bar Supplies " << endl;
  cin >> typeLocal;
  newItem.setItemType(typeLocal);
}
void deleteItem(){
  string nameLocal = 0;
  cout << "Delete Item" << endl;
  cout << "Enter the name of the item: " << endl;
  cin >> nameLocal;
  // Use a lambda function to find the item with the specified name
  auto it = remove_if(inventory.begin(), inventory.end(), [&nameLocal](const Item& item) {
      return item.getItemName() == nameLocal; // Assuming getItemName() returns the name of the item.
  });

  if (it != inventory.end()) {
      inventory.erase(it, inventory.end()); // Remove the item from the vector.
      cout << "Item deleted successfully." << endl;
  } else {
      cout << "Item not found." << endl;
  }
}
#endif