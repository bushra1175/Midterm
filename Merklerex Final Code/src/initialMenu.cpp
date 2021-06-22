#include "MerkelBot.h"
#include "MerkelMain.h"
#include <iostream>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include "initialMenu.h"
#include "OrderBook.h"

initialMenu::initialMenu()
{

}

void initialMenu::init()
{
    int input;
    currentTime = orderBook.getEarliestTime();

    while(true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}

void initialMenu::printMenu()
{
    // 1 print help
    std::cout << "1: Print help " << std::endl;
    // 2 print exchange stats
    std::cout << "2: Trade manually" << std::endl;
    // 3 make an offer
    std::cout << "3: Trade with MerkelBot " << std::endl;

    std::cout << "============== " << std::endl;

    std::cout << "Current time is: " << currentTime << std::endl;
}

void initialMenu::printHelp()
{
    std::cout << "Help - Welcome to the MerkelRex trading simulator." << std::endl;
    std::cout << "Choose one of the options below. You can either trade manually or trade using the automated bot. " << std::endl;

}

int initialMenu::getUserOption()
{
    int userOption = 0;
    std::string line;
    std::cout << "Type in 1-3" << std::endl;
    std::getline(std::cin, line);
    try{
        userOption = std::stoi(line);
    }catch(const std::exception& e)
    {
        // 
    }
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void initialMenu::processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-3" << std::endl;
    }
    if (userOption == 1) 
    {
        printHelp();
    }
    if (userOption == 2) 
    {
        MerkelMain app{};
        app.init();

    }
        if (userOption == 2) 
    {
        MerkelBot app{};
        app.init();
    }

}


