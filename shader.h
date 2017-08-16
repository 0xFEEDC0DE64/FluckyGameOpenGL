#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h>

class Shader
{
public:
    explicit Shader(const std::string &fileName);
    virtual ~Shader();

    void bind();

private:
    //disable copy
    Shader(const Shader &) = delete;
    Shader &operator=(const Shader &) = delete;

    static std::string loadShader(const std::string& fileName);
    static void checkShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
    static GLuint createShader(const std::string &text, GLenum shaderType);

    static constexpr unsigned int NUM_SHADERS = 2;

    GLuint m_program;
    GLuint m_shaders[NUM_SHADERS];
};

#endif // SHADER_H
