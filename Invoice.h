#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
using namespace std;

class Invoice{
  private:
    string invoiceID;
    int dollarsOwed;
  public:
    Invoice(string invoiceID);
    void addServiceCost(int costDollars);
    int getDollarsOwed();
    string getInvoiceID();

};




#endif