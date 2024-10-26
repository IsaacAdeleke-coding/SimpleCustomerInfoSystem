//
//  Address.hpp
//  SimpleCustomerInfoSystem
//
//  Created by Isaac Adeleke on 10/23/24.
//

// Address.hpp
#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <string>

namespace customer_system {

struct Address {
    std::string street;
    std::string city;
    std::string zip_code;

    // Constructor declaration for Address
    Address(const std::string& str, const std::string& ct, const std::string& zip);
};

struct Customer {
    std::string name;
    int age;
    Address address;  // Nested Address structure

    // Constructor declaration for Customer
    Customer(const std::string& nm, int ag, const Address& addr);
};

} // namespace customer_system

#endif // ADDRESS_HPP
