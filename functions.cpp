#include "functions.h"

std::string readShaderFromFile(const char* filename) {
    std::ifstream file(filename);
    
    if (!file.good()) {
        std::cout << "File failed to load..." << std::endl;
        exit(-1);
    }

    return std::string(std::istreambuf_iterator<char>(file),
        std::istreambuf_iterator<char>());
}

void framebuffer_size_callback(GLFWwindow* window, int newWidth, int newHeight) {
    glViewport(0, 0, newWidth, newHeight);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
    
    if (key == GLFW_KEY_V && action == GLFW_PRESS) {
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    }
    if (key == GLFW_KEY_B && action == GLFW_PRESS) {
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    }

}


