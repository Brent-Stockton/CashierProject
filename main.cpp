//
//  main.cpp
//  Brent Cashier Project
//
//  Created by Brent Stockton on 2/7/18.
//  Copyright © 2018 Brent Stockton. All rights reserved.
//


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    
    //Item Names
    string userItemOne, userItemTwo, userItemThree;
    int numItemOne = 0, numItemTwo = 0, numItemThree= 0;
   
    
    //Item Values
    double userPriceOne = 0, userPriceTwo =0, userPriceThree =0;
    double userTaxRate;
    
    //Totals/Tax
    double totalCostNoTax;
    double totalCostPlusTax;
    double totalTaxCost;
    
    //Total Cost Before Tax
    double userPriceOneAmount = 0, userPriceTwoAmount = 0, userPriceThreeAmount = 0;
    
    // Total Cost After Tax
    totalCostPlusTax = totalCostNoTax + totalTaxCost;

    
    // Price After Quantity
   
    userPriceOneAmount = userPriceOne * numItemOne;
    userPriceTwoAmount = userPriceTwo * numItemTwo;
    userPriceThreeAmount = userPriceThree * numItemThree;
    
    double amountPaid = 0;
    double amountPaidReturn = 0;
    int amountPaidConvert = 0;
    
    //Bills
    int hundreds = 0, twenties = 0, fives = 0, ones = 0;
    

    //Change
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    
    
    
    //Cashier Program Title
    cout << setfill('-');
    cout << setw(9) << "" << " My Awesome Store Cashier's Program " << setw(10) << "" << endl;
    cout << endl;
    
    //User Prompt for Item 1
    cout << "Enter the name of the item 1: ";
    getline(cin, userItemOne);
    cout << "Enter the price of " << userItemOne << ": $";
    cin >> userPriceOne;
    cout << "Enter the quantity of " << userItemOne << ": ";
    cin >> numItemOne;
    cout << endl;
    cin.ignore();
    
    //User Prompt for Item 2
    cout << "Enter the name of the item 2: ";
    getline(cin, userItemTwo);
    cout << "Enter the price of " << userItemTwo << ": $";
    cin >> userPriceTwo;
    cout << "Enter the quantity of " << userItemTwo << ": ";
    cin >> numItemTwo;
    cout << endl;
    cin.ignore();
    
    //User Prompt for Item 3
    cout << "Enter the name of the item 3: ";
    getline(cin, userItemThree);
    cout << "Enter the price of " << userItemThree << ": $";
    cin >> userPriceThree;
    cout << "Enter the quantity of " << userItemThree << ": ";
    cin >> numItemThree;
    cout << endl;
    cin.ignore();
    
    //User Prompt for Tax Rate
    cout << "Enter tax rate (%): ";
    cin >> userTaxRate;
    cout << endl;
    
    // Tax For The Items
    userTaxRate = userTaxRate / 100;
    totalTaxCost = totalCostNoTax * userTaxRate;
   
    // Cost Summary Title
    cout << setw(20) << setfill('-') << "" << " Cost Summary " << setw(21) << "" << endl;
    cout << endl;
    
    cout << "Item" << setw(20) << setfill(' ') << "Unit Price" << setw(15) << "Quantity" << setw(16) << "cost" << endl;
    
    cout << setw(4) << setfill('-') << "";
    cout << setw(10) << setfill(' ') << "";
    cout << setw(10) << setfill('-') << "";
    cout << setw(7) << setfill(' ') << "";
    cout << setw(8) << setfill('-') << "";
    cout << setw(6) << setfill(' ') << "";
    cout << setw(10) << setfill('-') << "";
    cout << setfill(' ');
    cout << endl;

    
    // Item one cost summary
    cout << fixed << setprecision(2);
    cout << setw(14) << left << userItemOne;
    cout << setw(1) << left << "$";
    cout << setw(9) << right << userPriceOne;
    cout << setw(15) << right << userItemOne;
    cout << setw(6) << "";
    cout << setw(1) << left << "$";
    cout << setw(9) << right << setprecision(2) << numItemOne;
    cout << endl;
    
    // Item two cost summary
    cout << fixed << setprecision(2);
    cout << setw(14) << left << userItemTwo;
    cout << setw(1) << left << "$";
    cout << setw(9) << right << userPriceTwo;
    cout << setw(15) << right << userItemTwo;
    cout << setw(6) << "";
    cout << setw(1) << left << "$";
    cout << setw(9) << right << setprecision(2) << numItemTwo;
    cout << endl;
    
    // Item three cost summary
    cout << fixed << setprecision(2);
    cout << setw(14) << left << userItemThree;
    cout << setw(1) << left << "$";
    cout << setw(9) << right << userPriceThree;
    cout << setw(15) << right << userItemThree;
    cout << setw(6) << "";
    cout << setw(1) << left << "$";
    cout << setw(9) << right << setprecision(2) << numItemThree;
    cout << endl;
    
    //Total before tax/ after tax
    cout << setw(55) << setfill('-') << "" << endl;
    cout << "Total before tax:" << setw(29) << setfill ('-') << "$" <<"     " << totalCostNoTax << endl; //FIXme Spacing
    cout << "Tax:" << setw(42) << "$" << "     " <<totalTaxCost << endl; //FIXme Spacing
    cout << setw(55) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << "Total Cost:" << setw(35) << "$" << setw(9) << totalCostPlusTax << endl;
    cout << endl;
    
    //Cost Prompt
    cout << "Now tell the customer the total cost of the purchase." << endl;
    cout << "How much money did the customer give you? $";
    cin >> amountPaid;
    cout << endl;
    
    //Bills Calculator
    amountPaidConvert = static_cast<int>(amountPaidReturn);
    hundreds = amountPaidConvert / 100;
    twenties = (amountPaidConvert % 100) / 20;
    fives = ((amountPaidConvert % 100) % 20) / 5;
    ones = (((amountPaidConvert % 100) % 20) % 5) / 1;
    
    //Change Calculator
    amountPaidConvert = static_cast<int>(amountPaidReturn * 100);
    amountPaidConvert = amountPaidConvert % 100;
    quarters = amountPaidConvert / 25;
    dimes = (amountPaidConvert % 25) / 10;
    nickels = ((amountPaidConvert % 25) % 10) / 5;
    pennies = (((amountPaidConvert % 25) % 10) % 5) / 1;
    
    
    //Calculating Change
    cout << "Calculating change..." << endl;
    cout << endl;
    amountPaidReturn = amountPaid - totalCostPlusTax;
    
    // Change Prompt
    cout << setw(26) << setfill('-') << "" << endl;
    cout << "Change: $" << setw(17) << setfill(' ') << amountPaidReturn << endl;
    cout << setw(26) << setfill('-') << "" << endl;
    cout << endl;

    //Bills and Change Calculation output
    cout << "Denominations..." << endl;
    cout << setfill(' ');
    cout << "$100 bills:" << setw(15) << hundreds << endl;
    cout << "$20 bills :" << setw(15) << twenties << endl;
    cout << "$5 bills  :" << setw(15) << fives << endl;
    cout << "$1 bills  :" << setw(15) << ones << endl;
    cout << "Quarters  :" << setw(15) << quarters << endl;
    cout << "Dimes     :" << setw(15) << dimes << endl;
    cout << "Nickels   :" << setw(15) << nickels << endl;
    cout << "Pennies   :" << setw(15) << pennies << endl;
    return 0;
}
