#include <vector>
#include <iostream>

#include "roll.h"

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter{
public:
    Roll* throw_die (Die&, Die&);
    friend std::ostream& operator<<(std::ostream&, const Shooter&);
    ~Shooter();
private:
    std::vector<Roll*> rolls;
    // or is it supposed to be
    // std::vector<Roll*> rolls;
};
#endif