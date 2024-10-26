//
//  Address.cpp
//  SimpleCustomerInfoSystem
//
//  Created by Isaac Adeleke on 10/23/24.
//

// Address.cpp
#include "Address.hpp"

namespace customer_system {

// Constructor definition for Address
Address::Address(const std::string& str, const std::string& ct, const std::string& zip)
    : street(str), city(ct), zip_code(zip) {}

// Constructor definition for Customer
Customer::Customer(const std::string& nm, int ag, const Address& addr)
    : name(nm), age(ag), address(addr) {}

} // namespace customer_system
