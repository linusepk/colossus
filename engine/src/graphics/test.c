#include "colossus/graphics/graphics.h"

#include <stdio.h>

#include <GLFW/glfw3.h>

void testGraphics(void)
{
    if (glfwInit()) {
        printf("GLFW working!\n");
    } else {
        printf("GLFW failed!\n");
    }

    glfwTerminate();
}