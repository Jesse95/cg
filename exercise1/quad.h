#ifndef QUAD_H
#define QUAD_H

#include "vertex.h"
#include <vector>

using namespace std;


class Quad
{
public:
    Quad(int v0,int v1, int v2, int v3);

    //n = index-Wert
    int getV(int n) const;
    int getQ(int n) const;
    int getE(int n) const;
    int getF() const;
    void setV(int n, int value);
    void setQ(int n, int value);
    void setE(int n, int value);
    void setF(int value);


private:
    //Eckpunkte Indeizies
    int v[4];
    //Nachbar Indeizies
    int q[4];
    //Kantenpunkt Indeizies
    int e[4];
    //Facepunkt Index
    int f;

};

#endif // QUAD_H
