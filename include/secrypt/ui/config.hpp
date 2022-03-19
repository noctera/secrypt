#ifndef CONFIG_H
#define CONFIG_H

#include "imgui.h"

namespace ui {
  namespace config {
    ImGuiWindowFlags getWindowFlags();
    void colors();
  }  // namespace config
}  // namespace ui

#endif