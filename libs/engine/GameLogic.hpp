#ifndef CONFINED_GAMELOGIC_HPP
#define CONFINED_GAMELOGIC_HPP

class GameLogic {
public:
    virtual void init() = 0;
    virtual void input() = 0;
    virtual void update() = 0;
    virtual void render() const = 0;

    virtual ~GameLogic() = delete;
};

#endif //CONFINED_GAMELOGIC_HPP
