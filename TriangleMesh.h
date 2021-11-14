#pragma once

#include <glad/glad.h>
#include <glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <glm/gtx/string_cast.hpp>

#include <iostream>
using namespace std;

class TriangleMesh
{
    private:
        float vertices[90] =
        {
            -1.0f, 1.0f, 0.0f, //left
             0.0f, 0.0f, 0.0f,  //right
             0.0f, 3.5f, 0.0f,   //top

             0.0f, 0.0f, 0.0f,
             1.0f, 1.0f, 0.0f,
             0.0f, 3.5f, 0.0f,

             1.0f, 1.0f, 0.0f,
             3.5f, 1.0f, 0.0f,
             0.0f, 0.0f, 0.0f,

             0.0f, 0.0f, 0.0f,
             2.0f, -1.0f, 0.0f,
             3.5f, 1.0f, 0.0f,

             2.0f, -1.0f, 0.0f,
             3.5f, -3.5f, 0.0f,
             0.0f, 0.0f, 0.0f,

             0.0f, -2.0f, 0.0f,
             3.5f, -3.5f, 0.0f,
             0.0f, 0.0f, 0.0f,

             -3.5f, -3.5f, 0.0f,
             0.0f, -2.0f, 0.0f,
             0.0f, 0.0f, 0.0f,

             -2.0f, -1.0f, 0.0f,
             0.0f, 0.0f, 0.0f,
             -3.5f, -3.5f, 0.0f,

             -2.0f, -1.0f, 0.0f,
             0.0f, 0.0f, 0.0f,
             -3.5f, 1.0f, 0.0f,

             -3.5f, 1.0f, 0.0f,
             -1.0f, 1.0f, 0.0f,
             0.0f, 0.0f, 0.0f
        };

        unsigned int VBO;
        unsigned int VAO;

	public:
		TriangleMesh();
        void DrawLoop(float centerX, float centerY, float sides, float innerRadius, float outerRadius);
        void Render();
};

