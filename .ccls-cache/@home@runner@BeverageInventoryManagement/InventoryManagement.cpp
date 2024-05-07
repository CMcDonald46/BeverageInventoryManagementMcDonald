// The goal of this project is to create a program that can keep track of
// inventory management for the Bevereage department of a club or restaraunt.
#include <algorithm> // For std::find_if
#include <iostream>
#include <vector>
using namespace std;

void showMenu();
void addItem();
class Item {
private:
  string itemName;
  double itemQuantity;
  double itemPrice;
  int itemType;

public:
  // Constructor
  Item(string name, double quantity, double price, int type)
      : itemName(name), itemQuantity(quantity), itemPrice(price),
        itemType(type) {}

  // Accessors
  string getItemName() const { return itemName; }
  double getItemQuantity() const { return itemQuantity; }
  double getItemPrice() const { return itemPrice; }
  int getItemType() const { return itemType; }
};

class Inventory {
private:
  vector<Item> items;

public:
  // Add item to inventory
  void addItem(const Item &item) { items.push_back(item); }

  // Delete item from inventory by name
  void deleteItem(const string &name) {
    auto it = find_if(items.begin(), items.end(), [&](const Item &item) {
      return item.getItemName() == name;
    });

    if (it != items.end()) {
      items.erase(it); // Remove the item from the vector
      cout << "Item deleted successfully." << endl;
    } else {
      cout << "Item not found." << endl;
    }
  }

  // Display all items in inventory
  void displayInventory() const {
    cout << "Inventory:" << endl;
    for (const auto &item : items) {
      cout << "Name: " << item.getItemName()
           << ", Quantity: " << item.getItemQuantity()
           << ", Price: " << item.getItemPrice()
           << ", Type: " << item.getItemType() << endl;
    }
  }
};
void showMenu() {
  cout << "Inventory Management System" << endl;
  cout << "1. Add Item" << endl;
  cout << "2. Delete Item" << endl;
  cout << "3. Display Inventory" << endl;
  cout << "4. Exit" << endl;
  cout << "5. Clear Screen" << endl;
  cout << "Enter your choice: ";
}
void addItem() {
  cout << "Enter item name: ";
  cin >> itemName;
  cout << "Enter item quantity: ";
  cin >> itemQuantity;
  cout << "Enter item price: ";
  cin >> itemPrice;
  cout << "Enter item type: ";
  cin >> itemType;
  inventory.addItem(Item(itemName, itemQuantity, itemPrice, itemType));
}
int main() {
  // Example usage
  Inventory inventory;

  // Add some items to the inventory
  inventory.addItem(Item("Item1", 10, 5.99, 1));
  inventory.addItem(Item("Item2", 5, 3.49, 2));
  inventory.addItem(Item("Item3", 20, 1.99, 3));

  // Display inventory
  inventory.displayInventory();

  // Delete an item from inventory
  inventory.deleteItem("Item2");

  // Display inventory after deletion
  inventory.displayInventory();

  return 0;
}