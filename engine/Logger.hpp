#ifndef CONFINED_LOGGER_HPP
#define CONFINED_LOGGER_HPP

#include <fstream>

namespace log {

    enum Severity {
        INFO = 1,
        WARNING = 2,
        ERROR = 4
    };
}

using log::Severity;

class Logger {
public:
    static void setFile(const char* path);

    static void log(Severity severity, const char* message);
    static void log(Severity severity, const std::string& message);
    static void logi(const char* message);
    static void logi(const std::string& message);
    static void logw(const char* message);
    static void logw(const std::string& message);
    static void loge(const char* message);
    static void loge(const std::string& message);

    static void close();

private:
    static std::ofstream* file;
};

#endif //CONFINED_LOGGER_HPP
