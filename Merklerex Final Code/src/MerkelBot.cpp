#include "MerkelBot.h"
#include <iostream>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"

MerkelBot::MerkelBot()
{

}

void MerkelBot::init()
{
    int input;
    currentTime = orderBook.getEarliestTime();

    wallet.insertCurrency("BTC", 10);

    while(true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}

void MerkelBot::printMenu()
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

void MerkelBot::printHelp()
{

}

int MerkelBot::getUserOption()
{
    int userOption = 0;
    return userOption;
}

void MerkelBot::processUserOption(int userOption)
{

}
