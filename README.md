# Customer Management System

A simple C++ project that demonstrates the use of classes to manage customer information, including address details. This project contains two main classes, `Address` and `Customer`, with an example of instantiation and usage in the main program.

## Project Structure

The project includes the following files:

- `Address.hpp`: Header file containing declarations for the `Address` and `Customer` classes.
- `Address.cpp`: Implementation file with the constructor definitions for both `Address` and `Customer`.
- `main.cpp`: Contains the `main` function that demonstrates the creation of an `Address` and `Customer` object and outputs customer details.

## Classes

### Address

Represents an address with the following attributes:
- `street`: The street name and number as a `std::string`.
- `city`: The city name as a `std::string`.
- `zip_code`: The zip code as a `std::string`.

**Constructor**:
```cpp
Address(const std::string& str, const std::string& ct, const std::string& zip);
Customer
Represents a customer with the following attributes:

name: Customer’s name as a std::string.
age: Customer’s age as an int.
address: A nested Address object representing the customer’s address.
Constructor:
Customer(const std::string& nm, int ag, const Address& addr);
Usage

To compile and run the project:

Compile the project with a C++ compiler (e.g., Xcode):

g++ -o customer_system main.cpp Address.cpp
Run the executable:


Example Output
Upon running, the program will output customer details, such as:
Customer Name: Alice Johnson
Customer Age: 42
Customer Address: 456 Oak Street, Metropolis, 12345

License

This project is licensed under the MIT License. See the LICENSE file for details.

Contributing

Contributions are welcome! Please feel free to submit a pull request or report issues.




