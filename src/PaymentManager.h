//
// Created by deine on 8/30/2020.
//

#ifndef MY_PROJECT_NAME_PAYMENTMANAGER_H
#define MY_PROJECT_NAME_PAYMENTMANAGER_H

#include <string>
#include "IPaymentMethod.h"

class PaymentManager {
public:
    std::string processPayment(IPaymentMethod* );
};


#endif //MY_PROJECT_NAME_PAYMENTMANAGER_H
