#ifndef IMGUIFRAME_H
#define IMGUIFRAME_H

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#if defined(IMGUI_IMPL_OPENGL_ES2)
#  include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h>

#include <string>

namespace ui {
  class ImguiFrame {
  public:
    ~ImguiFrame();
    int setupWindow();
    int createWindow(int width, int height, const char* name);
    void renderWindow(void (*func)());

  private:
    GLFWwindow* window;
    const char* glsl_version = "";
    static void glfw_error_callback(int error, const char* description);
  };
}  // namespace ui

#endif