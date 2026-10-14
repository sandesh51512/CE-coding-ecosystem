#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    double productPrice;
    int quantity;

public:
    // Accept product details
    void acceptDetails()
    {
        cout << "\nEnter Product ID: ";
        cin >> productID;
        cin.ignore(1000, '\n');

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Product Price: ";
        cin >> productPrice;

        cout << "Enter Quantity in Stock: ";
        cin >> quantity;
    }

    // Display product details
    void displayDetails()
    {
        cout << "\nProduct ID : " << productID;
        cout << "\nProduct Name : " << productName;
        cout << "\nProduct Price : Rs. " << productPrice;
        cout << "\nQuantity in Stock : " << quantity << endl;
    }

    // Return product price
    double getPrice()
    {
        return productPrice;
    }
};

int main()
{
    Product products[100];
    int n = 0;
    int choice;
    int highest;

    do
    {
        cout << "\n========== PRODUCT INVENTORY ==========\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Display Product with Highest Price\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (n < 100)
            {
                cout << "\nEnter details of Product " << n + 1 << ":\n";
                products[n].acceptDetails();
                n++;
                cout << "\nProduct added successfully!\n";
            }
            else
            {
                cout << "Inventory is full!\n";
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo products available.\n";
            }
            else
            {
                cout << "\n========== ALL PRODUCTS ==========\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "\nProduct " << i + 1 << ":";
                    products[i].displayDetails();
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                cout << "\nNo products available.\n";
            }
            else
            {
                highest = 0;
                for (int i = 1; i < n; i++)
                {
                    if (products[i].getPrice() > products[highest].getPrice())
                    {
                        highest = i;
                    }
                }
                cout << "\n===== HIGHEST PRICE PRODUCT =====\n";
                products[highest].displayDetails();
            }
            break;

        case 4:
            cout << "\nThank you for using Product Inventory System!\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}