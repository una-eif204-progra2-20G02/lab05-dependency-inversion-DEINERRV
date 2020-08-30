//
// Created by deine on 8/30/2020.
//

#ifndef MY_PROJECT_NAME_IPAYMENTMETHOD_H
#define MY_PROJECT_NAME_IPAYMENTMETHOD_H

#include <string>

class IPaymentMethod {
public:
    virtual ~IPaymentMethod();

    virtual std::string sendPayment() = 0;
};


#endif //MY_PROJECT_NAME_IPAYMENTMETHOD_H
