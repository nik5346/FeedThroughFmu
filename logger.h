#pragma once

#include <chrono>
#include <cstring>
#include <iostream>
#include <string>
#include <fstream>
#include <cstdarg>

void log(const char* msg)
{
    std::ofstream outfile;
    outfile.open("C:\\fmuLog.txt", std::ios_base::app); // append instead of overwrite

    auto timestamp = std::chrono::system_clock::now();
    std::string formattedTimestamp = std::format("{:%F %T}", timestamp);

    outfile << "[" << formattedTimestamp << "] " << msg << std::endl;

    return;
}