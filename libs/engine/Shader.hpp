#ifndef CONFINED_SHADER_HPP
#define CONFINED_SHADER_HPP

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <string>

#define VERTEX "VERTEX"
#define FRAGMENT "FRAGMENT"
#define PROGRAM "PROGRAM"

#define BUFFER_SIZE 1024

class Shader {
protected:
    unsigned int id;
    static void checkCompileErrors(unsigned int shader, const std::string& type);

public:
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);

    void use() const;

    void setBool(const char* name, bool value) const;
    void setInt(const char* name, int value) const;
    void setFloat(const char* name, float value) const;
    void setMat4f(const char* name, glm::mat4 value) const;

    ~Shader();
};

#endif //CONFINED_SHADER_HPP
