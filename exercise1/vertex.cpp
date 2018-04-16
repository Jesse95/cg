#include "vertex.h"

Vertex::Vertex(float x, float y, float z,string type)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->type = type;
}



float Vertex::getY() const
{
    return y;
}

void Vertex::setY(float value)
{
    y = value;
}

float Vertex::getX() const
{
    return x;
}

void Vertex::setX(float value)
{
    x = value;
}

float Vertex::getZ() const
{
    return z;
}

void Vertex::setZ(float value)
{
    z = value;
}

int Vertex::getValence() const
{
    return valence;
}

void Vertex::setValence(int value)
{
    valence = value;
}
