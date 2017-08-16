#ifndef VERTEX_H
#define VERTEX_H

#include <glm/glm.hpp>

class Vertex
{
public:
    explicit Vertex(const glm::vec3 &pos);
    virtual ~Vertex();

private:
    //disable copy
    Vertex(const Vertex &) = delete;
    Vertex &operator=(const Vertex &) = delete;

    glm::vec3 m_pos;
};

#endif // VERTEX_H
