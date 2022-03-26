#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <vector>

#include "imgui.h"

struct NavMenuProps {
  const char* name;
  int pageNum;
};

namespace ui {
  namespace config {
    ImGuiWindowFlags getWindowFlags();
    void colors();
    std::vector<NavMenuProps> getNavMenuProps();
  }  // namespace config
}  // namespace ui

#endif