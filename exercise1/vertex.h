#ifndef VERTEX_H
#define VERTEX_H

#include <vector>
#include <string>

using namespace std;
class Vertex
{
public:
    Vertex(float x, float y, float z,string type);

    float getY() const;
    void setY(float value);

    float getX() const;
    void setX(float value);

    float getZ() const;
    void setZ(float value);

    int getValence() const;
    void setValence(int value);

private:
    int valence;
    float x,y,z;
    string type;

};

#endif // VERTEX_H
