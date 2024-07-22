#include <iostream>
#include "create_account.h"

void create__account() {
    int create_account_type;
    
    std::cout << "What type of account do you want to create?\n\n";

    std::cout << "1) Basic\n";
    std::cout << "2) Saving\n";
    std::cout << "3) Investing\n";

    std::cin >> create_account_type;
    
}