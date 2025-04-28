#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Shahzeel Ahmad"; 
    string vu_id = "bc240415853"; 

    cout << "Name: " << name;
    cout << "\nVU ID: " << vu_id;

    string numeric_part;
    cout << "\n\nEnter numeric part of VU-id: ";
    cin >> numeric_part;

    string middle_digits = numeric_part.substr(2, 5);
    cout << "\nExtracted Middle five digits: " << middle_digits;

    const int price_burger = 250;
    const int price_pizza = 500;
    const int price_fries = 150;
    const int price_sandwich = 200;
    const int price_cold_drink = 100;

    cout << "\n\n=== Welcome to C++ Cafe ===";
    cout << "\n------ Menu ------";
    cout << "\n1. Burger        - Rs.250 Per Piece";
    cout << "\n2. Pizza         - Rs.500 Per Medium Size";
    cout << "\n3. Fries         - Rs.150 Per Plate";
    cout << "\n4. Sandwich      - Rs.200 Per Piece";
    cout << "\n5. Cold Drink    - Rs.100 Per Bottle";

    bool continueOrdering = true;

    while (continueOrdering) {
        int total = 0;
        int choice;
        int quantity;

        cout << "\n\nEnter the item number to order (1-5) or 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity for Burger: ";
                cin >> quantity;
                total += quantity * price_burger;
                cout << "Total for Burger: Rs." << quantity * price_burger << endl;
                break;

            case 2:
                cout << "Enter quantity for Pizza: ";
                cin >> quantity;
                total += quantity * price_pizza;
                cout << "Total for Pizza: Rs." << quantity * price_pizza << endl;
                break;

            case 3:
                cout << "Enter quantity for Fries: ";
                cin >> quantity;
                total += quantity * price_fries;
                cout << "Total for Fries: Rs." << quantity * price_fries << endl;
                break;

            case 4:
                cout << "Enter quantity for Sandwich: ";
                cin >> quantity;
                total += quantity * price_sandwich;
                cout << "Total for Sandwich: Rs." << quantity * price_sandwich << endl;
                break;

            case 5:
                cout << "Enter quantity for Cold Drink: ";
                cin >> quantity;
                total += quantity * price_cold_drink;
                cout << "Total for Cold Drink: Rs." << quantity * price_cold_drink << endl;
                break;

            case 0:
                continueOrdering = false;
                cout << "\nThank you for visiting C++ Cafe!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid number (0-5)." << endl;
        }

        if (continueOrdering) {
            int total_before_discount = total;
            int discount = 0;
            if (total_before_discount >= 5000) {
                discount = total_before_discount * 0.10;
                cout << "\nSurprise! You've unlocked a 10% discount.";
            }

            int final_amount = total_before_discount - discount;

            cout << "\n\n==== Final Bill ====";
            cout << "\nTotal before discount: Rs." << total_before_discount;
            cout << "\nDiscount: Rs." << discount;
            cout << "\nNet payable amount: Rs." << final_amount;

            cout << "\n\nWould you like to order more items? (1 for Yes, 0 for No): ";
            cin >> continueOrdering;
        }
    }

    return 0;
}

