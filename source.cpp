// VulkanProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define GLFW_INCLUDE_VULKAN
#include<GLFW/glfw3.h>

#include <iostream>
#include "VulkanContext.h"

int main() {

glfwInit();

glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

GLFWwindow* window = glfwCreateWindow(1280, 720, "HELLO VULKAN ", nullptr, nullptr);

VulkanContext::getInstance()->initVulkan(window);

while (!glfwWindowShouldClose(window)) {



    glfwPollEvents();
}

glfwDestroyWindow(window);
glfwTerminate();

return 0;

}
