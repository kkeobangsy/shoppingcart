#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(string newName);
    string GetName();
    void SetPrice(double newPrice);
    double GetPrice();
    void SetQuantity(int newQuantity);
    int GetQuantity();
private:
    string itemName;
    double itemPrice;
    int itemQuantity;
};