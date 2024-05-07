// Carson McDonald
// Inventory Management
// C++
// The goal of this project is to create a program that can keep track of
// Inventory management for the Bevereage department of a club or restaraunt.
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Item 
{
private:
  string name;
  double quantity;
  double price;
  int type;
public:
  // Mutators. 
  void setItemName(string n){name = n;}
  void setItemType(int it){type = it;}
  void setQuantity(double iq){quantity = iq;}
  void setPrice(double ip){price = ip;}
  // Accesssors
  string getItemName(string name) const
  {
    return name;
  }
  double getQuantity(double quantity) const
  {
    return quantity;
  }
  double getPrice(double price) const
  {
    return price;
  }
  int getItemType(double itemType) const
  {
    return itemType;
  }
  void printItem()
{
  cout << "Item Name: " << name << endl;
  cout << "Item Quantity: " << quantity << endl;
  cout << "Item Price: " << price << endl;
  cout << "Item Type: " << type << endl;
};
};
// My void function that shows the user the menu.
void showMenu() 
{
  cout << "1. Add an item to inventory." << endl;
  cout << "2. Display inventory." << endl;
  cout << "3. Change an item's quantity." << endl;
  cout << "4. Change an item's price." << endl;
  cout << "5. End." << endl;
  cout << "6. Clear Screen." << endl;
}
void menuSelection()
{
  Item newItem;
  string newName;
  double newQuantity;
  double newPrice;
  int newType;
  
  int choice;
  do{
  cout << "Enter your choice: ";
  cin >> choice;
  switch(choice)
    {
    case 1:
      cout << "What item would you like to add to the inventory?" << endl;
      cin >> newName;
      newItem.setItemName(newName);
      cout << "How many of this item would you like to add?" << endl;
      cin >> newQuantity;
      newItem.setQuantity(newQuantity);
      cout << "What is the price of this item?" << endl;
      cin >> newPrice;
      newItem.setPrice(newPrice);
      cout << "What type of item is this? Examples: 1. Liquor 2. Wine 3. Beer 4. NA Bev. 5. Bar Supplies" << endl;
      cin >> newType;
      newItem.setItemType(newType);
      cout << "Item added to inventory." << endl;
      newItem.printItem();
      break;
    case 2:
      cout << "Displaying inventory." << endl;
      newItem.printItem();
      break;
    case 3:
      cout << "What item would you like to change the quantity of?" << endl;
      cin >> newName;
      newItem.setItemName(newName);
      cout << "What is the new quantity of this item?" << endl;
      cin >> newQuantity;
      newItem.setQuantity(newQuantity);
      cout << "Quantity changed." << endl;
      newItem.printItem();
      break;
    case 4:
      cout << "What item would you like to change the price of?" << endl;
      cin >> newName;
      newItem.setItemName(newName);
      cout << "What is the new price of this item?" << endl;
      cin >> newPrice;
      newItem.setPrice(newPrice);
      cout << "Price changed." << endl;
      newItem.printItem();
      break;
    case 5:
      cout << "Ending program." << endl;
      return;
      ;
    case 6:
      cout << "Clearing screen." << endl;
      cout << "\033[H\033[J" << endl;
      break;
    default:
    cout << "Invalid choice." << endl;
    }
  showMenu();
}while(choice != 5);
}
int main() 
{
  showMenu();
  menuSelection();
  
  return 0;
}