#include <iostream>

int main(){

    try {



    } catch(std::exception& e){

        std::cerr << e.what() << std::endl;

    } catch (...){

        std::cerr << "Unrecoverable error. Exiting." << std::endl;

    }

    return 0;

}
