#ifndef USBCONNECTION_H
#define USDCONNECTION_H

#include <iostream>
#include <stack>
using namespace std;

class USBConnection{
    private:
        int ID;
        USBConnection(int ID){
            this->ID = ID;
        }
    public:
        static stack<int> ids;
        static USBConnection* CreateUsbConnection(){
            if (!ids.empty()){
                int newID = ids.top();
                ids.pop();
                return new USBConnection(newID);
            } else{
                return nullptr;
            }
        };
        int get_id(){
            return ID;
        }
        ~USBConnection(){
            ids.push(ID);
        };
};

stack<int> USBConnection::ids({3,2,1});

#endif