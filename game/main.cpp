#include <cstdlib>

#include "Logger.hpp"
#include "exceptions/Exception.hpp"
#include "Engine.hpp"

using logger::Logger;

int main(){

#ifdef NDEBUG

    Logger::setFile("debug.log");

#endif

    int status = EXIT_SUCCESS;

    try {

        Engine engine;

        engine.loop();

        Logger::logi("Terminating.");

    } catch (const std::exception& e){

        Logger::loge(e.what());
        status =  EXIT_FAILURE;

    } catch (...){

        Logger::loge("Unrecoverable error. Exiting.");
        status =  EXIT_FAILURE;

    }

    Logger::close();

    return status;

}
