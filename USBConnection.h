#ifndef USBCONNECTION_H
#define USDCONNECTION_H

#include <iostream>
#include <stack>
using namespace std;

class USBConnection{
    private:
        int ID;
         
    public:
        static stack<int> ids;
        USBConnection(int ID);
        ~USBConnection();
};

#endif