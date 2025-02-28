
#include <iostream>
#include <iomanip>

using namespace std;

// Exchange rates (USD to other currencies)
const double USD_TO_EUR = 0.85;
const double USD_TO_GBP = 0.75;
const double USD_TO_JPY = 110.50;
const double USD_TO_INR = 82.00;

// Function to convert currency
double convertCurrency(double amount, int choice) {
    switch (choice) {
        case 1: return amount * USD_TO_EUR;
        case 2: return amount * USD_TO_GBP;
        case 3: return amount * USD_TO_JPY;
        case 4: return amount * USD_TO_INR;
        default: return -1;  // Invalid choice
    }
}

int main() {
    double amount;
    int choice;

    // User input for amount
    cout << "Enter amount in USD: ";
    cin >> amount;

    // User selects currency
    cout << "Select currency:\n";
    cout << "1. EUR (Euro)\n";
    cout << "2. GBP (British Pound)\n";
    cout << "3. JPY (Japanese Yen)\n";
    cout << "4. INR (Indian Rupee)\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    // Convert and display result
    double convertedAmount = convertCurrency(amount, choice);
    if (convertedAmount == -1) {
        cout << "Invalid currency selection!\n";
    } else {
        cout << fixed << setprecision(2);  // Format output to 2 decimal places
        cout << "Converted amount: " << convertedAmount << endl;
    }

    return 0;
}
