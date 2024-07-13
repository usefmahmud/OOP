#include <bits/stdc++.h>
#include "Customer.h"
#ifndef OOP_BANK_H
#define OOP_BANK_H
using namespace std;
class Bank {
    vector<Customer> customers;
public:
    Bank(const string& name);
    int registerCustomer(
            const string& name,
            const int& age
            ); // return account_id
};


#endif //OOP_BANK_H
