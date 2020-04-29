#include <iostream>

#include "Logger.hpp"

using log::Severity::INFO;
using log::Severity::WARNING;
using log::Severity::ERROR;

std::ofstream* Logger::file;

void Logger::setFile(const char* path){

    if (file != nullptr){

        file->close();

    }

    file = new std::ofstream(path, std::ofstream::out);

}

void Logger::log(Severity severity, const char* message){

    std::string s;

    s += '[';
    s += (severity == INFO ? "INFO" : severity == WARNING ? "WARN" : severity == ERROR ? "ERRO" : "UNKN");
    s += "] ";
    s += message;
    s += '\n';

    switch (severity){
        case INFO:
        case WARNING:
            std::cout << s;
            std::cout.flush();
            break;

        case ERROR:
        default:
            std::cerr << s;
            std::cerr.flush();
            break;
    }

    if (file != nullptr){

        *file << s;

    }
}

void Logger::logi(const char* message){

    log(INFO, message);

}

void Logger::logw(const char* message){

    log(WARNING, message);

}

void Logger::loge(const char* message){

    log(ERROR, message);

}

void Logger::close(){

    if (file != nullptr){

        file->close();
        delete file;

    }
}
