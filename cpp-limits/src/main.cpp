#include "Log.h"
#include "main.h"
#include "Timer.cpp"
#include "Sleep.h"
#include "FileManager.h"

#include <GLFW/glfw3.h>
#include <string>

int main() {
	Log("HI");
	Nameof();

    Timer timer;

    timer.Start();
    Sleep(1000);
    timer.Stop();

    auto data = ReadFileAsString("data.txt");

    if (data.has_value())
        Log(data.value().c_str());
    else Log("No");

    return 0;
    //return MainWindow();
}

int MainWindow()
{
    // GLFW
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        //glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
