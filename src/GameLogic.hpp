#ifndef CONFINED_GAMELOGIC_HPP
#define CONFINED_GAMELOGIC_HPP

#include <GameLogic.hpp>

class GameLogic : public engine::GameLogic {
public:
    GameLogic();

    void init() override;
    void input() override;
    void update() override;
    void render() const override;

    ~GameLogic();
};

#endif //CONFINED_GAMELOGIC_HPP
