#ifndef CONFINED_GAMELOGIC_HPP
#define CONFINED_GAMELOGIC_HPP

#include <GameLogic.hpp>

using engine::GameLogic;

class Game : public GameLogic {
public:
    Game();

    void init() override;
    void input() override;
    void update() override;
    void render() const override;

    ~Game();
};

#endif //CONFINED_GAMELOGIC_HPP
