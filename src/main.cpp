#include <cstdlib>

#include "Logger.hpp"
#include "exceptions/Exception.hpp"
#include "Engine.hpp"
#include "Game.hpp"

using logger::Logger;

int main(){

    Logger& logger = Logger::getLogger();

#ifdef NDEBUG

    logger.setFile("debug.log");

#endif

    try {

        GameLogicPtr gameLogic(new Game);

        Engine engine(gameLogic);

        engine.loop();

        logger << logger::Severity::INFO << "Terminating.";

    } catch (const std::exception& e){

        logger.loge(e.what());
        return EXIT_FAILURE;

    } catch (...){

        logger.loge("Unrecoverable error. Exiting.");
        return EXIT_FAILURE;

    }

    return EXIT_SUCCESS;

}
