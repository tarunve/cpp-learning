#include <iostream>
using namespace std;

/**
 *  ->  Common Member functions are stored once in memory.
 *  ->  Member variables are stored separately for each object.
 */

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initializeCounter()
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of your item" << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
};

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id : " << itemId[i] << " is : " << itemPrice[i] << endl;
    }
};

int main()
{
    Shop s1;
    s1.initializeCounter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();

    return 0;
}