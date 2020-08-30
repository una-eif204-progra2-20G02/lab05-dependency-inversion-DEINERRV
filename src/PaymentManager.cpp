//
// Created by deine on 8/30/2020.
//

#include "PaymentManager.h"
std::string PaymentManager::processPayment(IPaymentMethod* paymentMethod){
    return paymentMethod->sendPayment();
}