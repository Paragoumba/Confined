#include <iostream>

#include "Logger.hpp"

using Severity::INFO;
using Severity::WARNING;
using Severity::ERROR;

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

void Logger::log(Severity severity, const std::string& message){

    log(severity, message.c_str());

}

void Logger::logi(const char* message){

    log(INFO, message);

}

void Logger::logi(const std::string& message){

    logi(message.c_str());

}

void Logger::logw(const char* message){

    log(WARNING, message);

}

void Logger::logw(const std::string& message){

    logw(message.c_str());

}

void Logger::loge(const char* message){

    log(ERROR, message);

}

void Logger::loge(const std::string& message){

    loge(message.c_str());

}

void Logger::close(){

    if (file != nullptr){

        file->close();
        delete file;

    }
}
