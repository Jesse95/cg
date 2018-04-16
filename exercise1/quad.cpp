#include "quad.h"

Quad::Quad(int v0,int v1, int v2, int v3)
{
    Quad::v[0] = v0;
    Quad::v[1] = v1;
    Quad::v[2] = v2;
    Quad::v[3] = v3;
}

int Quad::getV(int n) const
{
    if(n > -1 && n < 4) return v[n];
    else return -1;
}

int Quad::getQ(int n) const
{
    if(n > -1 && n < 4) return v[n];
    else return -1;
}

int Quad::getE(int n) const
{
    if(n > -1 && n < 4) return v[n];
    else return -1;
}

void Quad::setV(int n, int value)
{
    if(n > -1 && n < 4) v[n] = value;
}

