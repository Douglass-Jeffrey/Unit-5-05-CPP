// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program turns inputs into a proper address format

#include <iostream>
#include <string>

std::string mailAddress(std::string name,
                        std::string address,
                        std::string city,
                        std::string province,
                        std::string pCode,
                        std::string apartment = "") {
    // This function turns information given into proper mailing format

    // Variables
    std::string mail;

    // Process
    if (apartment.size() != 0) {
         mail = name + "\n" + apartment + " " + address \
                + "\n" + city + " " + province + " " + pCode;
    } else {
        mail = name + "\n" + address + "\n" + city + " " + province + \
               " " + pCode;
    }
    return mail;
}

int main() {
    // This function gets the details of the person recieving MAIL

    // Variables
    std::string name;
    std::string address;
    std::string apt_checker;
    std::string city;
    std::string province;
    std::string pCode;
    std::string post;
    std::string apartment = "";

    // Input
    std::cout << "Enter the recipient's full name:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Enter the recipient's address:"
              << std::endl;
    std::getline(std::cin, address);
    std::cout << "Does the recipient live in an apartment (y/n):" << std::endl;
    std::getline(std::cin, apt_checker);
    if (apt_checker == "y" || apt_checker == "yes") {
        std::cout << "Enter the recipient's apartment number:" << std::endl;
        std::getline(std::cin, apartment);
    }
    std::cout << "Enter the recipient's city:" << std::endl;
    std::getline(std::cin, city);
    std::cout << "Enter the recipient's province/territory:"
              << std::endl;
    std::getline(std::cin, province);
    std::cout << "Enter the recipient's postal code:" << std::endl;
    std::getline(std::cin, pCode);;

    // Call mailAddress function
    if (apartment != "") {
        post = mailAddress(name, address, city,
                              province, pCode,
                              apartment);
    } else {
        post = mailAddress(name, address, city,
                              province, pCode);
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << post << std::endl;
}
