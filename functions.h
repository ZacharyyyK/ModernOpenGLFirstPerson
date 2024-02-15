#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string readShaderFromFile(const char* filename);
void framebuffer_size_callback(GLFWwindow* window, int newWidth, int newHeight);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);