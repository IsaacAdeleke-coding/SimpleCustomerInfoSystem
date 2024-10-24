//
//  main.cpp
//  SimpleCustomerInfoSystem
//
//  Created by Isaac Adeleke on 10/23/24.
//

#include <iostream>
#include "Address.hpp"

using namespace customer_system;  // Use the customer_system namespace

int main() {
    // Create an Address object
    Address address("456 Oak Street", "Metropolis", "12345");

    // Create a Customer object with the Address
    Customer customer("Alice Johnson", 42, address);

    // Print the Customer's details
    std::cout << "Customer Name: " << customer.name << std::endl;
    std::cout << "Customer Age: " << customer.age << std::endl;
    std::cout << "Customer Address: " << customer.address.street << ", "
              << customer.address.city << ", " << customer.address.zip_code << std::endl;

    return 0;
}
