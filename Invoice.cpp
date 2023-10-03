#include <iostream>
#include "Invoice.h"


Invoice::Invoice(string invoiceID){
    this->invoiceID = invoiceID;
    this->dollarsOwed = dollarsOwed;
}

void Invoice::addServiceCost(int costDollars){
    dollarsOwed = costDollars;
}

int Invoice::getDollarsOwed(){
    return dollarsOwed;
}

string Invoice::getInvoiceID(){
    return invoiceID;
}
