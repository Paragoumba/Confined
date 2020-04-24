#ifndef CONFINED_LOGGER_HPP
#define CONFINED_LOGGER_HPP

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
    Logger();
    explicit Logger(const char* path);

    void log(Severity severity, const char* message);
    void logi(const char* message);
    void logw(const char* message);
    void loge(const char* message);
};

#endif //CONFINED_LOGGER_HPP
