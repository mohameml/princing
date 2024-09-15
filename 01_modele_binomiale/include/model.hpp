#ifndef MODEL_HPP
#define MODEL_HPP

class Model
{

public:
    double r;   // interstae rate
    double s_0; // spot à t = 0

    Model();
    Model(double r, double s_0);
};

#endif